/*
#include <iostream>
using namespace std;

const double pi = 3.14;

//类的基本

class Circle {

	//访问权限

public:

	//属性 半径
	int m_r;

	//行为 获取圆的周长
	double claculateZC() {
		return 2 * pi * m_r;
	}

	//行为给属性赋值
	void setM_r(double r) {
		m_r = r;
	}
};

void main(void) {

	//通过圆类创建具体的圆（对象）
	Circle cl;
	//给属性进行赋值
	cl.m_r = 10;

	cout << cl.claculateZC() << endl;

	Circle c2;
	c2.setM_r(20);
	c2.claculateZC();
	cout << c2.claculateZC() << endl;

}
*/