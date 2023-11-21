#include <array>

class ManyVirtuals {
public:
    ManyVirtuals() = default;
    ManyVirtuals(int a, int b, int c) : m_a(a), m_b(b), m_c(c) {}
    virtual ~ManyVirtuals() = default;

    virtual int getA() const { return m_a; }
    virtual int getB() const { return m_b; }
    virtual int getC() const { return m_c; }

private:
    int m_a = 0;
    int m_b = 0;
    int m_c = 0;
};

std::array<ManyVirtuals, 10'000> a;

int main() { }
