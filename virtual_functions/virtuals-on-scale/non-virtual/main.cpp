#include <iostream>
#include <string>
#include <vector>
#include <array>

template<typename T>
class Wrapper {
public:
    Wrapper(T a, T b, T c) : m_a(a), m_b(b), m_c(c) {}
    ~Wrapper() = default;
    T getA() const { return m_a; }
    T getB() const { return m_b; }
    T getC() const { return m_c; }
private:
    T m_a;
    T m_b;
    T m_c;
};

int main() {
    {
      Wrapper<int> a(3, 4, 5);
      std::cout << a.getA() << a.getB() << a.getC() << '\n';
    }
    {
      Wrapper<char> a('3','4', '5');
      std::cout << a.getA() << a.getB() << a.getC() << '\n';
    }
    {
      Wrapper<double> a(3.,4., 5.);
      std::cout << a.getA() << a.getB() << a.getC() << '\n';
    }
    {
      Wrapper<float> a(3.f,4.f, 5.f);
      std::cout << a.getA() << a.getB() << a.getC() << '\n';
    }
    {
      Wrapper<std::string> a("3", "4", "5");
      std::cout << a.getA() << a.getB() << a.getC() << '\n';
    }
    {
      Wrapper<std::vector<std::string>> a({"3"}, {"4"}, {"5"});
      std::cout << a.getA()[0] << a.getB()[0] << a.getC()[0] << '\n';
    }
    {
      Wrapper<std::array<std::string, 1>> a({"3"}, {"4"}, {"5"});
      std::cout << a.getA()[0] << a.getB()[0] << a.getC()[0] << '\n';
    }
}


