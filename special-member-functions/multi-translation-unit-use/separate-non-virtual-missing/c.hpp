#pragma once

class C {
public:
	C(int num);
	C();

	int getNum() const noexcept;
	void setNum(int num) noexcept; 
private:
	int m_num = 0;
};
