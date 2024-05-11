# Compile commands

In this case, we have to build our libraries separately and link them together when we compile our main executable.

```sh
clang++ -std=c++20 -stdlib=libc++ -dynamiclib -include lib1.hpp lib1.cpp -o liblib1.dylib
clang++ -std=c++20 -stdlib=libc++ -dynamiclib -include lib2.hpp lib2.cpp -o liblib2.dylib
clang++ -std=c++20 -stdlib=libc++ -dynamiclib -include lib3.hpp lib3.cpp -o liblib3.dylib
clang++ -std=c++20 -stdlib=libc++ -L . -llib1 -llib2 -llib3 main.cpp -o main
```