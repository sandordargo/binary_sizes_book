#include "c.h"

C::C() = default;
C::~C() = default;

C::C(const C&) = default;
C::C(C&&) = default;
C& C::operator=(const C&) = default;
C& C::operator=(C&&) = default;
