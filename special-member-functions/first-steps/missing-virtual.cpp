#include <array>

class C {
public:
	virtual ~C() = default;
};

std::array<C, 10000> a{};

int main() {
	
}
