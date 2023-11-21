#include <array>

struct Node {
    int a = 1, b = 1;
};

int main() {
    constexpr std::array <Node, 10'000> a;
    return 0;
}
