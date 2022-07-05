## Getting started

1. Clone the repo

```bash
git clone https://github.com/mrdvince/lox.git
```

2. Build and run

```bash
cd lox
# build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE -DCMAKE_BUILD_TYPE:STRING=Debug -DCMAKE_C_COMPILER:FILEPATH=/usr/bin/clang -DCMAKE_CXX_COMPILER:FILEPATH=/usr/bin/clang++ -S/Users/vince/Projects/lox -Bbuild -G "Unix Makefiles"
# run
./build/lox
```
