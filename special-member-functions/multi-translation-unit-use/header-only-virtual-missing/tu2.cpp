#include "tu2.hpp"

#include "c.hpp"

#include <iostream>

void bar() {
	C c;
	c.setNum(51);
	std::cout << c.getNum() << '\n'; 
}