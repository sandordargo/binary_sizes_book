#include "c.hpp"

C::C(int num): m_num(num) {}

C::C() noexcept= default;
C::~C()noexcept = default;

C::C(const C&) noexcept= default;
C::C(C&&) noexcept= default;
C& C::operator=(const C&) noexcept= default;
C& C::operator=(C&&) noexcept= default;

int C::getNum() const noexcept { return m_num; }
void C::setNum(int num) noexcept { m_num = num; } 