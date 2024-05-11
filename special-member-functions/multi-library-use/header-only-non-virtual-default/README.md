# Compile commands

In this case, we have to build our libraries separately and link them together when we compile our main executable.

```sh
clang++ -std=c++20 -stdlib=libc++ -dynamiclib -include wrapper.h wrapper.cpp -o libwrapper.dylib
clang++ -std=c++20 -stdlib=libc++ -dynamiclib -L . -lwrapper -include moduleA.h moduleA.cpp -o libmoduleA.dylib
clang++ -std=c++20 -stdlib=libc++ -dynamiclib -L . -lwrapper -include moduleB.h moduleB.cpp -o libmoduleB.dylib
clang++ -std=c++20 -stdlib=libc++ -dynamiclib -L . -lwrapper -include moduleC.h moduleC.cpp -o libmoduleC.dylib
clang++ -std=c++20 -stdlib=libc++ -dynamiclib -L . -lwrapper -include moduleD.h moduleD.cpp -o libmoduleD.dylib
clang++ -std=c++20 -stdlib=libc++ -L . -lmoduleA -lmoduleB -lmoduleC -lmoduleD main.cpp -o main
```