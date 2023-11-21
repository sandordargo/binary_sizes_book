#pragma once

class C {
public:
	C(int num);

	C() noexcept;
	virtual ~C() noexcept;

	C(const C&) noexcept;
	C(C&&) noexcept;
	C& operator=(const C&) noexcept;
	C& operator=(C&&) noexcept;

	int getNum() const noexcept;
	void setNum(int num) noexcept; 
private:
	int m_num = 0;
};
