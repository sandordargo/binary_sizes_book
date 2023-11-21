#pragma once

class C {
public:
	C();
	virtual ~C();

	C(const C&);
    C(C&&);
	C& operator=(const C&);
	C& operator=(C&&);
};
