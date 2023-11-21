#pragma once

class C {
public:
	C();
	~C();

	C(const C&);
    C(C&&);
	C& operator=(const C&);
	C& operator=(C&&);
};
