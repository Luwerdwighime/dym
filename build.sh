#!/bin/sh
rm -rf build dym
cmake -B build
cmake --build build -j8
mv build/dym .
rm -rf build

