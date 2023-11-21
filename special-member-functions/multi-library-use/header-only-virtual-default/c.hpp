#pragma once

class C {
public:
	C(int num): m_num(num) {}

	C() = default;
	virtual ~C() = default;

	C(const C&) = default;
	C(C&&) = default;
	C& operator=(const C&) = default;
	C& operator=(C&&) = default;

	int getNum() const noexcept { return m_num; }
	void setNum(int num) noexcept { m_num = num; } 
private:
	int m_num = 0;
};
