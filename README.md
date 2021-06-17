# cpp-dojo

[![CI](https://github.com/horothesun/cpp-dojo/actions/workflows/ci-linux.yml/badge.svg)](https://github.com/horothesun/cpp-dojo/actions/workflows/ci-linux.yml)

## Clean

```bash
cmake --build build --config Debug --target clean
```

## Build

```bash
cmake --build build --config Debug --target all -j 14
```

## Test

```bash
./build/test/tests
```

## Run

```bash
./build/src/cpp-dojo
```
