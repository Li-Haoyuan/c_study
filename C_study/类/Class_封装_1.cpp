#include <iostream>
using namespace std;

const double pi = 3.14;

class Circle {

	//访问权限

public:

	//属性 半径
	int m_r;

	//行为 获取圆的周长
	double claculateZC() {
		return 2 * pi * m_r;
	}

};

void main(void) {

	//通过圆类创建具体的圆（对象）
	Circle cl;
	//给属性进行赋值
	cl.m_r = 10;

	cout << cl.claculateZC() << endl;
}