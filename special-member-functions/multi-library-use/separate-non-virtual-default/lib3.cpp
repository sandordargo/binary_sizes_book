#include "lib3.hpp"

#include "c.hpp"

#include <iostream>

void foobar() {
	C c;
	c.setNum(66);
	std::cout << c.getNum() << '\n'; 
}