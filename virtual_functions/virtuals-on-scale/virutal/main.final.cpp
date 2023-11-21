#include <iostream>
#include <string>

template<typename T>
class Wrapper {
public:
    Wrapper(T a, T b, T c) : m_a(a), m_b(b), m_c(c) {}
    virtual ~Wrapper() = default;
    virtual T getA() const { return m_a; }
    virtual T getB() const { return m_b; }
    virtual T getC() const { return m_c; }
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

}


