## Getting started

1. Clone the repo

```bash
git clone https://github.com/mrdvince/lox.git
```

2. Build and run

```bash
cd lox
# build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE -DCMAKE_BUILD_TYPE:STRING=Debug -DCMAKE_C_COMPILER:FILEPATH=/usr/bin/clang -DCMAKE_CXX_COMPILER:FILEPATH=/usr/bin/clang++ -S/lox -Bbuild -G "Unix Makefiles"

# run
./build/lox
# == test chunk ==
# 0000  123 OP_CONSTANT         0 '1.2'
# 0002    | OP_RETURN
```
