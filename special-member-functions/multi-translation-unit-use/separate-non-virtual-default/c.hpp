#pragma once

class C {
public:
	C(int num);

	C();
	~C();

	C(const C&);
	C(C&&);
	C& operator=(const C&);
	C& operator=(C&&);

	int getNum() const noexcept;
	void setNum(int num) noexcept; 
private:
	int m_num = 0;
};
