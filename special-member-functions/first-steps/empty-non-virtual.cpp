#include <array>

class C {
public:
	C() {}
	~C() {}

	C(const C&) {}
	C(C&&) {}
	C& operator=(const C&) { return *this; }
	C& operator=(C&&) { return *this; }

};

std::array<C, 10000> a{};

int main() {
	
}
