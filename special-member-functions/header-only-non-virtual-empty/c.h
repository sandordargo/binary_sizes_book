#pragma once

class C {
public:
	C() {}
	~C() {}

	C(const C&) {}
    C(C&&) {}
	C& operator=(const C&) { return *this; }
	C& operator=(C&&) { return *this; }
};
