#include <iostream>
using namespace std;

//同名成员的处理
class Base {

public:
	Base() {
		this->a = 100;
	}

	void func() {
		cout << "Base" << endl;
	}

	void func(int a) {
		cout << "Base(int a )" << endl;
	}

	int a;
	//静态变量b
	static int b;
};

//静态变量需要类内声明类外初始化
int Base::b = 100;

class Son :public Base {

public:

	Son() {
		this->a = 200;
	}

	void func() {
		cout << "Son" << endl;
	}

	int a;
};

//同名属性处理方式
void test01() {
	
	Son s;
	cout << s.a << endl; //200 son自己的数据

	//通过子类对象访问到父类中同名成员，需要加作用域
	cout << s.Base::a << endl; //Base的数据 100
}

//同名函数处理方式
void test02() {

	Son s;
	s.func(); //直接调用 调用的是子类中的成员函数

	//调用父类成员函数
	s.Base::func();

	//如果子类出现与父类同名的成员函数，子类会隐藏父类所有同名函数（包括函数重载）
	//如果想访问，需要加作用域
	s.func(100);
}


void main() {
	test01();
	test02();

}