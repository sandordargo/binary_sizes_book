#include <iostream>
#include <concepts>

template <std::invocable<int, int> Callable>
int performOperation(Callable op, int lhs, int rhs) {
    return op(lhs, rhs);
}

int main() {
    auto add = [](int lhs, int rhs) {return lhs + rhs;};
    auto subtract = [](int lhs, int rhs) {return lhs - rhs;};
    auto multiply = [](int lhs, int rhs) {return lhs * rhs;};
    std::cout << performOperation(add, 42, 51) << '\n';
    std::cout << performOperation(subtract, 42, 51) << '\n';
    std::cout << performOperation(multiply, 42, 51) << '\n';
    return 0;
}
