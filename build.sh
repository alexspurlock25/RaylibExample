#!/bin/bash

set -e

mkdir -p build
cd build

cmake ..
make

echo "Build finished. Check /build/ folder."

cd ..
build/CppHelloWorld
