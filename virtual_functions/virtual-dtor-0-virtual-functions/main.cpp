#include <array>

class SingleVirtual {
public:
    SingleVirtual() = default;
    SingleVirtual(int a, int b, int c) : m_a(a), m_b(b), m_c(c) {}
    virtual ~SingleVirtual() = default;

    int getA() const { return m_a; }
    int getB() const { return m_b; }
    int getC() const { return m_c; }

private:
    int m_a = 0;
    int m_b = 0;
    int m_c = 0;
};


std::array<SingleVirtual, 10'000> a;

int main() { }
