#include <array>

class C {
public:
	C() = default;
	~C() = default;

	C(const C&) = default;
	C(C&&) = default;
	C& operator=(const C&) = default;
	C& operator=(C&&) = default;

};

std::array<C, 10000> a{};

int main() {
	
}
