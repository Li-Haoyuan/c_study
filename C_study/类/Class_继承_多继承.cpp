/*
#include <iostream>
using namespace std;

//多重继承

class Base1 {
public:
	Base1() {
		a = 100;
	}

	int a;

};

class Base2 {
public:
	Base2() {
		a = 200;
	}

	int a;

};


class Son :public Base1,public Base2 {
public:
	Son() {
		c = 300;
		d = 400;
	}

	int c;
	int d;
};

void test01() {
	Son s;

	//cout << s.a << endl; //两个父类同时拥有a 会报错
	cout << s.Base1::a << endl;
	cout << s.Base2::a << endl;
	//不推荐使用多重继承！！
}

void main() {
	test01();

}
*/