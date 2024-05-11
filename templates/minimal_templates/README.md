# Compile commands

Each of the examples in the folder are composed of one single `.cpp` file. It's practical to call the executable the same as source code file.

```sh
# The pattern to follow is
# clang++ -std=c++20 -Os -stdlib=libc++ <example filename>.cpp -o <example filename>
# For example:
clang++ -std=c++20 -Os -stdlib=libc++ minimal.cpp -o minimal 
```