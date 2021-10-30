ENABLED_ALGS="OQS_ENABLE_KEM_kyber_1024;OQS_ENABLE_KEM_kyber_768;OQS_ENABLE_KEM_kyber_512;OQS_ENABLE_KEM_saber_lightsaber;OQS_ENABLE_KEM_saber_saber;OQS_ENABLE_KEM_saber_firesaber"

if [[ "$OSTYPE" == "linux-gnu"* ]]; then
  sudo apt update
  sudo apt install -y ninja-build xz-utils build-essential cmake libssl-dev
elif [[ "$OSTYPE" == "darwin"* ]]; then
  brew install ninja gnu-tar xz cmake openssl@1.1
else
  exit 0
fi

git clone https://github.com/jiep/liboqs
cd liboqs
git checkout coins

mkdir -p build
cd build
rm -rf *
cmake -GNinja -DOQS_MINIMAL_BUILD="${ENABLED_ALGS}" ..
ninja
