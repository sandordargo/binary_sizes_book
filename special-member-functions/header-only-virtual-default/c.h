#pragma once

class C {
public:
	C() = default;
	virtual ~C() = default;

	C(const C&) = default;
	C(C&&) = default;
	C& operator=(const C&) = default;
	C& operator=(C&&) = default;
};
