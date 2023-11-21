#include "lib1.hpp"

#include "c.hpp"

#include <iostream>

void foo() {
	C c;
	c.setNum(42);
	std::cout << c.getNum() << '\n'; 
}