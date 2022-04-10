# Post-Quantum Group Authenticated Key Exchange protocol with the LibOQS library

[![CMake Build Matrix](https://github.com/jiep/pq-gake-fsxy/actions/workflows/ci.yml/badge.svg)](https://github.com/jiep/pq-gake-fsxy/actions/workflows/ci.yml)

This repository implements a Post-Quantum Group Authenticated Key Exchange protocol based on the FSXY transformation on Classic McEliece, Kyber, NTRU, and Saber and a compares their performance.

## Dependencies

* [LibOQS v0.7.0](https://github.com/open-quantum-safe/liboqs)

## Supported algorithms

* Classic-McEliece-348864
* Classic-McEliece-348864f
* Classic-McEliece-460896
* Classic-McEliece-460896f
* Classic-McEliece-6688128
* Classic-McEliece-6688128f
* Classic-McEliece-6960119
* Classic-McEliece-6960119f
* Classic-McEliece-8192128
* Classic-McEliece-8192128f
* Kyber512
* Kyber768
* Kyber1024
* NTRU-HPS-2048-509
* NTRU-HPS-2048-677
* NTRU-HPS-4096-821
* NTRU-HRSS-701
* LightSaber-KEM
* Saber-KEM
* FireSaber-KEM

## How to compile

1. Clone `liboqs` and build forked `liboqs`.

```
bash liboqs.sh
```

2. Run `cmake`.

```
mkdir build && cd build
cmake ..
```

3. Run tests

```
ctest
```

## Run GAKE binary

```
./bin/test_gake <number of parties> <KEM name> [-v]
```

### Example 1

```
./bin/test_gake 10 LightSaber-KEM
Round 1-2
Round 3
Round 4
All keys are equal!
Session key: 373b7c6c33a1f93dc7ed1f09ec384e499c632381c100b43997e1724826b1753a
Session id:  0f5f1d1088565f156afd925251e0aaf5840489756b399e798ca0dd0232dd8aad


Time stats
	Init time      : 0.001s (8.00%)
	Round 1-2 time : 0.004s (58.92%)
	Round 3 time   : 0.000s (4.44%)
	Round 4 time   : 0.002s (28.64%)
	Total time     : 0.007s (100.00%)
```

### Example 2

```
./bin/test_gake 3 LightSaber-KEM -v
Party 0
	Public key:  6f3780906f6dd7543d01...cf24633139725f08d864
	Secret key:  ffffff0b000000000040...676154f6d13f7c6661b0
	Left key:    00000000000000000000...00000000000000000000
	Right key:   00000000000000000000...00000000000000000000
	Session id:  00000000000000000000...00000000000000000000
	Session key: 00000000000000000000...00000000000000000000
	X:
		X0: 00000000000000000000...00000000000000000000
		X1: 00000000000000000000...00000000000000000000
		X2: 00000000000000000000...00000000000000000000
	Coins:
		r0: 00000000000000000000...00000000000000000000
		r1: 00000000000000000000...00000000000000000000
		r2: 00000000000000000000...00000000000000000000
	Commitments:
		c0: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
		c1: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
		c2: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
	Master Key:
		k0: 00000000000000000000...00000000000000000000
		k1: 00000000000000000000...00000000000000000000
		k2: 00000000000000000000...00000000000000000000
	Pids:
		pid0: Party 0
		pid1: Party 1
		pid2: Party 2
	Accepted:   0
	Terminated: 0
Party 1
	Public key:  aa342e917ec5bd94532e...7091533d2b99b6fa0e53
	Secret key:  01e0ff0f8000f0fffbbf...121d26073a42d3b2bc7e
	Left key:    00000000000000000000...00000000000000000000
	Right key:   00000000000000000000...00000000000000000000
	Session id:  00000000000000000000...00000000000000000000
	Session key: 00000000000000000000...00000000000000000000
	X:
		X0: 00000000000000000000...00000000000000000000
		X1: 00000000000000000000...00000000000000000000
		X2: 00000000000000000000...00000000000000000000
	Coins:
		r0: 00000000000000000000...00000000000000000000
		r1: 00000000000000000000...00000000000000000000
		r2: 00000000000000000000...00000000000000000000
	Commitments:
		c0: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
		c1: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
		c2: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
	Master Key:
		k0: 00000000000000000000...00000000000000000000
		k1: 00000000000000000000...00000000000000000000
		k2: 00000000000000000000...00000000000000000000
	Pids:
		pid0: Party 0
		pid1: Party 1
		pid2: Party 2
	Accepted:   0
	Terminated: 0
Party 2
	Public key:  04b9d39a88b2fa2fa9ca...3d1cb561c8e9c59bcb14
	Secret key:  004000008000400000c0...95bc6fb21854991fc9ac
	Left key:    00000000000000000000...00000000000000000000
	Right key:   00000000000000000000...00000000000000000000
	Session id:  00000000000000000000...00000000000000000000
	Session key: 00000000000000000000...00000000000000000000
	X:
		X0: 00000000000000000000...00000000000000000000
		X1: 00000000000000000000...00000000000000000000
		X2: 00000000000000000000...00000000000000000000
	Coins:
		r0: 00000000000000000000...00000000000000000000
		r1: 00000000000000000000...00000000000000000000
		r2: 00000000000000000000...00000000000000000000
	Commitments:
		c0: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
		c1: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
		c2: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
	Master Key:
		k0: 00000000000000000000...00000000000000000000
		k1: 00000000000000000000...00000000000000000000
		k2: 00000000000000000000...00000000000000000000
	Pids:
		pid0: Party 0
		pid1: Party 1
		pid2: Party 2
	Accepted:   0
	Terminated: 0
Round 1-2
Party 0
	Public key:  6f3780906f6dd7543d01...cf24633139725f08d864
	Secret key:  ffffff0b000000000040...676154f6d13f7c6661b0
	Left key:    b5f41f44aefa5eed657b...a43dc21c3f5600b4ada1
	Right key:   cc74fdf8dd06299d81c0...31e24cfbb63a29763b85
	Session id:  00000000000000000000...00000000000000000000
	Session key: 00000000000000000000...00000000000000000000
	X:
		X0: 00000000000000000000...00000000000000000000
		X1: 00000000000000000000...00000000000000000000
		X2: 00000000000000000000...00000000000000000000
	Coins:
		r0: 00000000000000000000...00000000000000000000
		r1: 00000000000000000000...00000000000000000000
		r2: 00000000000000000000...00000000000000000000
	Commitments:
		c0: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
		c1: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
		c2: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
	Master Key:
		k0: 00000000000000000000...00000000000000000000
		k1: 00000000000000000000...00000000000000000000
		k2: 00000000000000000000...00000000000000000000
	Pids:
		pid0: Party 0
		pid1: Party 1
		pid2: Party 2
	Accepted:   0
	Terminated: 0
Party 1
	Public key:  aa342e917ec5bd94532e...7091533d2b99b6fa0e53
	Secret key:  01e0ff0f8000f0fffbbf...121d26073a42d3b2bc7e
	Left key:    cc74fdf8dd06299d81c0...31e24cfbb63a29763b85
	Right key:   8b45f8337ddbc2fbdacf...1238af88f111f86cf8d6
	Session id:  00000000000000000000...00000000000000000000
	Session key: 00000000000000000000...00000000000000000000
	X:
		X0: 00000000000000000000...00000000000000000000
		X1: 00000000000000000000...00000000000000000000
		X2: 00000000000000000000...00000000000000000000
	Coins:
		r0: 00000000000000000000...00000000000000000000
		r1: 00000000000000000000...00000000000000000000
		r2: 00000000000000000000...00000000000000000000
	Commitments:
		c0: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
		c1: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
		c2: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
	Master Key:
		k0: 00000000000000000000...00000000000000000000
		k1: 00000000000000000000...00000000000000000000
		k2: 00000000000000000000...00000000000000000000
	Pids:
		pid0: Party 0
		pid1: Party 1
		pid2: Party 2
	Accepted:   0
	Terminated: 0
Party 2
	Public key:  04b9d39a88b2fa2fa9ca...3d1cb561c8e9c59bcb14
	Secret key:  004000008000400000c0...95bc6fb21854991fc9ac
	Left key:    8b45f8337ddbc2fbdacf...1238af88f111f86cf8d6
	Right key:   b5f41f44aefa5eed657b...a43dc21c3f5600b4ada1
	Session id:  00000000000000000000...00000000000000000000
	Session key: 00000000000000000000...00000000000000000000
	X:
		X0: 00000000000000000000...00000000000000000000
		X1: 00000000000000000000...00000000000000000000
		X2: 00000000000000000000...00000000000000000000
	Coins:
		r0: 00000000000000000000...00000000000000000000
		r1: 00000000000000000000...00000000000000000000
		r2: 00000000000000000000...00000000000000000000
	Commitments:
		c0: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
		c1: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
		c2: 00000000000000000000...00000000000000000000|00000000000000000000...00000000000000000000|00000000000000000000000000000000
	Master Key:
		k0: 00000000000000000000...00000000000000000000
		k1: 00000000000000000000...00000000000000000000
		k2: 00000000000000000000...00000000000000000000
	Pids:
		pid0: Party 0
		pid1: Party 1
		pid2: Party 2
	Accepted:   0
	Terminated: 0
Round 3
Party 0
	Public key:  6f3780906f6dd7543d01...cf24633139725f08d864
	Secret key:  ffffff0b000000000040...676154f6d13f7c6661b0
	Left key:    b5f41f44aefa5eed657b...a43dc21c3f5600b4ada1
	Right key:   cc74fdf8dd06299d81c0...31e24cfbb63a29763b85
	Session id:  00000000000000000000...00000000000000000000
	Session key: 00000000000000000000...00000000000000000000
	X:
		X0: 7980e2bc73fc7770e4bb...95df8ee7896c29c29624
		X1: 473105cba0ddeb665b0f...23dae373472bd11ac353
		X2: 3eb1e777d3219c16bfb4...b6056d94ce47f8d85577
	Coins:
		r0: 40654d6ad9f8fa0e9e88...28498a3717497d50379a
		r1: dcf216a2f003095e2613...76e851e19a0a630239bb
		r2: 5517f02ba5933ae3e4c5...6e65812e47ac554f7375
	Commitments:
		c0: 48295f823c7aba107c87...a3bd748e2b88edd18489|fcc6fa8d8de0a5df95ca...6422c2222d514c65c02a|8b01e37e50889f0596aab0efcdd95309
		c1: fb4ddba67a0e6ef3dc7f...3b6c31d82921765b5b18|47abb0c7edd90f26f67b...be7c5c0eb9c9fc6e7bd8|bd4206864e76acc8485496674b2f90c5
		c2: 084828fdeea4cffa634a...703d96c71fb7193a1509|89d3d7063f6374a761c2...f11b9f458789f0b3410c|00ddcf95551ff54fc1b3693d236e241e
	Master Key:
		k0: 00000000000000000000...00000000000000000000
		k1: 00000000000000000000...00000000000000000000
		k2: 00000000000000000000...00000000000000000000
	Pids:
		pid0: Party 0
		pid1: Party 1
		pid2: Party 2
	Accepted:   0
	Terminated: 0
Party 1
	Public key:  aa342e917ec5bd94532e...7091533d2b99b6fa0e53
	Secret key:  01e0ff0f8000f0fffbbf...121d26073a42d3b2bc7e
	Left key:    cc74fdf8dd06299d81c0...31e24cfbb63a29763b85
	Right key:   8b45f8337ddbc2fbdacf...1238af88f111f86cf8d6
	Session id:  00000000000000000000...00000000000000000000
	Session key: 00000000000000000000...00000000000000000000
	X:
		X0: 7980e2bc73fc7770e4bb...95df8ee7896c29c29624
		X1: 473105cba0ddeb665b0f...23dae373472bd11ac353
		X2: 3eb1e777d3219c16bfb4...b6056d94ce47f8d85577
	Coins:
		r0: 40654d6ad9f8fa0e9e88...28498a3717497d50379a
		r1: dcf216a2f003095e2613...76e851e19a0a630239bb
		r2: 5517f02ba5933ae3e4c5...6e65812e47ac554f7375
	Commitments:
		c0: 48295f823c7aba107c87...a3bd748e2b88edd18489|fcc6fa8d8de0a5df95ca...6422c2222d514c65c02a|8b01e37e50889f0596aab0efcdd95309
		c1: fb4ddba67a0e6ef3dc7f...3b6c31d82921765b5b18|47abb0c7edd90f26f67b...be7c5c0eb9c9fc6e7bd8|bd4206864e76acc8485496674b2f90c5
		c2: 084828fdeea4cffa634a...703d96c71fb7193a1509|89d3d7063f6374a761c2...f11b9f458789f0b3410c|00ddcf95551ff54fc1b3693d236e241e
	Master Key:
		k0: 00000000000000000000...00000000000000000000
		k1: 00000000000000000000...00000000000000000000
		k2: 00000000000000000000...00000000000000000000
	Pids:
		pid0: Party 0
		pid1: Party 1
		pid2: Party 2
	Accepted:   0
	Terminated: 0
Party 2
	Public key:  04b9d39a88b2fa2fa9ca...3d1cb561c8e9c59bcb14
	Secret key:  004000008000400000c0...95bc6fb21854991fc9ac
	Left key:    8b45f8337ddbc2fbdacf...1238af88f111f86cf8d6
	Right key:   b5f41f44aefa5eed657b...a43dc21c3f5600b4ada1
	Session id:  00000000000000000000...00000000000000000000
	Session key: 00000000000000000000...00000000000000000000
	X:
		X0: 7980e2bc73fc7770e4bb...95df8ee7896c29c29624
		X1: 473105cba0ddeb665b0f...23dae373472bd11ac353
		X2: 3eb1e777d3219c16bfb4...b6056d94ce47f8d85577
	Coins:
		r0: 40654d6ad9f8fa0e9e88...28498a3717497d50379a
		r1: dcf216a2f003095e2613...76e851e19a0a630239bb
		r2: 5517f02ba5933ae3e4c5...6e65812e47ac554f7375
	Commitments:
		c0: 48295f823c7aba107c87...a3bd748e2b88edd18489|fcc6fa8d8de0a5df95ca...6422c2222d514c65c02a|8b01e37e50889f0596aab0efcdd95309
		c1: fb4ddba67a0e6ef3dc7f...3b6c31d82921765b5b18|47abb0c7edd90f26f67b...be7c5c0eb9c9fc6e7bd8|bd4206864e76acc8485496674b2f90c5
		c2: 084828fdeea4cffa634a...703d96c71fb7193a1509|89d3d7063f6374a761c2...f11b9f458789f0b3410c|00ddcf95551ff54fc1b3693d236e241e
	Master Key:
		k0: 00000000000000000000...00000000000000000000
		k1: 00000000000000000000...00000000000000000000
		k2: 00000000000000000000...00000000000000000000
	Pids:
		pid0: Party 0
		pid1: Party 1
		pid2: Party 2
	Accepted:   0
	Terminated: 0
Round 4
	Party 0
		Xi are zero!
		Commitments are correct!
	Party 1
		Xi are zero!
		Commitments are correct!
	Party 2
		Xi are zero!
		Commitments are correct!
Party 0
	Public key:  6f3780906f6dd7543d01...cf24633139725f08d864
	Secret key:  ffffff0b000000000040...676154f6d13f7c6661b0
	Left key:    b5f41f44aefa5eed657b...a43dc21c3f5600b4ada1
	Right key:   cc74fdf8dd06299d81c0...31e24cfbb63a29763b85
	Session id:  335683f5d6f68c07f403...9ff0ec0666c8aa758e9f
	Session key: b9543925d432aa649f44...dc567363cbf681ba4dec
	X:
		X0: 7980e2bc73fc7770e4bb...95df8ee7896c29c29624
		X1: 473105cba0ddeb665b0f...23dae373472bd11ac353
		X2: 3eb1e777d3219c16bfb4...b6056d94ce47f8d85577
	Coins:
		r0: 40654d6ad9f8fa0e9e88...28498a3717497d50379a
		r1: dcf216a2f003095e2613...76e851e19a0a630239bb
		r2: 5517f02ba5933ae3e4c5...6e65812e47ac554f7375
	Commitments:
		c0: 48295f823c7aba107c87...a3bd748e2b88edd18489|fcc6fa8d8de0a5df95ca...6422c2222d514c65c02a|8b01e37e50889f0596aab0efcdd95309
		c1: fb4ddba67a0e6ef3dc7f...3b6c31d82921765b5b18|47abb0c7edd90f26f67b...be7c5c0eb9c9fc6e7bd8|bd4206864e76acc8485496674b2f90c5
		c2: 084828fdeea4cffa634a...703d96c71fb7193a1509|89d3d7063f6374a761c2...f11b9f458789f0b3410c|00ddcf95551ff54fc1b3693d236e241e
	Master Key:
		k0: b5f41f44aefa5eed657b...a43dc21c3f5600b4ada1
		k1: cc74fdf8dd06299d81c0...31e24cfbb63a29763b85
		k2: 8b45f8337ddbc2fbdacf...1238af88f111f86cf8d6
	Pids:
		pid0: Party 0
		pid1: Party 1
		pid2: Party 2
	Accepted:   1
	Terminated: 1
Party 1
	Public key:  aa342e917ec5bd94532e...7091533d2b99b6fa0e53
	Secret key:  01e0ff0f8000f0fffbbf...121d26073a42d3b2bc7e
	Left key:    cc74fdf8dd06299d81c0...31e24cfbb63a29763b85
	Right key:   8b45f8337ddbc2fbdacf...1238af88f111f86cf8d6
	Session id:  335683f5d6f68c07f403...9ff0ec0666c8aa758e9f
	Session key: b9543925d432aa649f44...dc567363cbf681ba4dec
	X:
		X0: 7980e2bc73fc7770e4bb...95df8ee7896c29c29624
		X1: 473105cba0ddeb665b0f...23dae373472bd11ac353
		X2: 3eb1e777d3219c16bfb4...b6056d94ce47f8d85577
	Coins:
		r0: 40654d6ad9f8fa0e9e88...28498a3717497d50379a
		r1: dcf216a2f003095e2613...76e851e19a0a630239bb
		r2: 5517f02ba5933ae3e4c5...6e65812e47ac554f7375
	Commitments:
		c0: 48295f823c7aba107c87...a3bd748e2b88edd18489|fcc6fa8d8de0a5df95ca...6422c2222d514c65c02a|8b01e37e50889f0596aab0efcdd95309
		c1: fb4ddba67a0e6ef3dc7f...3b6c31d82921765b5b18|47abb0c7edd90f26f67b...be7c5c0eb9c9fc6e7bd8|bd4206864e76acc8485496674b2f90c5
		c2: 084828fdeea4cffa634a...703d96c71fb7193a1509|89d3d7063f6374a761c2...f11b9f458789f0b3410c|00ddcf95551ff54fc1b3693d236e241e
	Master Key:
		k0: b5f41f44aefa5eed657b...a43dc21c3f5600b4ada1
		k1: cc74fdf8dd06299d81c0...31e24cfbb63a29763b85
		k2: 8b45f8337ddbc2fbdacf...1238af88f111f86cf8d6
	Pids:
		pid0: Party 0
		pid1: Party 1
		pid2: Party 2
	Accepted:   1
	Terminated: 1
Party 2
	Public key:  04b9d39a88b2fa2fa9ca...3d1cb561c8e9c59bcb14
	Secret key:  004000008000400000c0...95bc6fb21854991fc9ac
	Left key:    8b45f8337ddbc2fbdacf...1238af88f111f86cf8d6
	Right key:   b5f41f44aefa5eed657b...a43dc21c3f5600b4ada1
	Session id:  335683f5d6f68c07f403...9ff0ec0666c8aa758e9f
	Session key: b9543925d432aa649f44...dc567363cbf681ba4dec
	X:
		X0: 7980e2bc73fc7770e4bb...95df8ee7896c29c29624
		X1: 473105cba0ddeb665b0f...23dae373472bd11ac353
		X2: 3eb1e777d3219c16bfb4...b6056d94ce47f8d85577
	Coins:
		r0: 40654d6ad9f8fa0e9e88...28498a3717497d50379a
		r1: dcf216a2f003095e2613...76e851e19a0a630239bb
		r2: 5517f02ba5933ae3e4c5...6e65812e47ac554f7375
	Commitments:
		c0: 48295f823c7aba107c87...a3bd748e2b88edd18489|fcc6fa8d8de0a5df95ca...6422c2222d514c65c02a|8b01e37e50889f0596aab0efcdd95309
		c1: fb4ddba67a0e6ef3dc7f...3b6c31d82921765b5b18|47abb0c7edd90f26f67b...be7c5c0eb9c9fc6e7bd8|bd4206864e76acc8485496674b2f90c5
		c2: 084828fdeea4cffa634a...703d96c71fb7193a1509|89d3d7063f6374a761c2...f11b9f458789f0b3410c|00ddcf95551ff54fc1b3693d236e241e
	Master Key:
		k0: b5f41f44aefa5eed657b...a43dc21c3f5600b4ada1
		k1: cc74fdf8dd06299d81c0...31e24cfbb63a29763b85
		k2: 8b45f8337ddbc2fbdacf...1238af88f111f86cf8d6
	Pids:
		pid0: Party 0
		pid1: Party 1
		pid2: Party 2
	Accepted:   1
	Terminated: 1
All keys are equal!
Session key: b9543925d432aa649f4429019cf85f6f8708523f2c7adc567363cbf681ba4dec
Session id:  335683f5d6f68c07f403d6ea1ed0100098412165653a9ff0ec0666c8aa758e9f


Time stats
	Init time      : 0.001s (21.72%)
	Round 1-2 time : 0.002s (42.25%)
	Round 3 time   : 0.001s (16.60%)
	Round 4 time   : 0.001s (19.43%)
	Total time     : 0.005s (100.00%)
```
