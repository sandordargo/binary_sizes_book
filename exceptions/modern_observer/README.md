# Acknowledgement

This code example is based on Klaus Igleberger's book, [C++ Software Design](https://www.amazon.com/Software-Design-Principles-Patterns-High-Quality/dp/1098113160?&_encoding=UTF8&tag=sandordargo-20&linkCode=ur2&linkId=e9b6f64671aac55ff52ecfd91e137d6e&camp=1789&creative=9325). 

# Compile command

```sh
# to compile without exceptions, add -fno-exceptions
clang++ -std=c++20 -Os -stdlib=libc++ --include-directory . person.cpp main.cpp -o main
```