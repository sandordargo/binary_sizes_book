#include "c.h"

C::C() {}
C::~C() {}

C::C(const C&) {}
C::C(C&&) {}
C& C::operator=(const C&) { return *this; }
C& C::operator=(C&&) { return *this; }
