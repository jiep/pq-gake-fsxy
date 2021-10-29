#include <stdio.h>
#include <stdint.h>

#include "utils.h"

void print_stats(clock_t begin_init,
                 clock_t end_init,
                 clock_t end_keys,
                 clock_t end_alg_init,
                 clock_t end_algB,
                 clock_t end_algA,
                 clock_t end_total) {

   int CLOCK_TICKS = sysconf(_SC_CLK_TCK);
   double time_init     = (double)(end_init - begin_init) / CLOCK_TICKS;
   double time_keys     = (double)(end_keys - end_init) / CLOCK_TICKS;
   double time_alg_init = (double)(end_alg_init - end_keys) / CLOCK_TICKS;
   double time_alg_b    = (double)(end_algB - end_alg_init) / CLOCK_TICKS;
   double time_alg_a    = (double)(end_algA - end_algB) / CLOCK_TICKS;
   double time_total    = (double)(end_total - end_init) / CLOCK_TICKS;

   printf("\n\nTime stats\n");
   printf("\tInit time       : %.3fs (%.2f%%)\n", time_init, time_init*100/time_total);
   printf("\tRound keys time : %.3fs (%.2f%%)\n", time_keys, time_keys*100/time_total);
   printf("\tRound alg. Init : %.3fs (%.2f%%)\n", time_alg_init, time_alg_init*100/time_total);
   printf("\tRound alg. B    : %.3fs (%.2f%%)\n", time_alg_b, time_alg_b*100/time_total);
   printf("\tRound alg. A    : %.3fs (%.2f%%)\n", time_alg_a, time_alg_a*100/time_total);
   printf("\tTotal time      : %.3fs (%.2f%%)\n", time_total, time_total*100/time_total);
}

void print_hex(const uint8_t *bytes, size_t length) {
  for(size_t i = 0; i < length; i++){
    printf("%02x", bytes[i]);
  }
  printf("\n");
}

void print_hex_short(const uint8_t *bytes, size_t length, size_t max) {
  for(size_t i = 0; i < max; i++){
    printf("%02x", bytes[i]);
  }
  printf("...");
  for(size_t i = length - max; i < length; i++){
    printf("%02x", bytes[i]);
  }
  printf("\n");
}
