#include "c.hpp"

C::C(int num): m_num(num) {}

C::C() = default;
C::~C() = default;

C::C(const C&) = default;
C::C(C&&) = default;
C& C::operator=(const C&) = default;
C& C::operator=(C&&) = default;

int C::getNum() const noexcept { return m_num; }
void C::setNum(int num) noexcept { m_num = num; } 