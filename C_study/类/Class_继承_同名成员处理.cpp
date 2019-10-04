/*
#include <iostream>
using namespace std;

//同名成员的处理
class Base {

public:
	Base() {
		this->a = 100;
	}

	static void func2() {
		cout << "Base" << endl;
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

	static void func2() {
		cout << "Son" << endl;
	}

	void func() {
		cout << "Son" << endl;
	}

	int a;
	//静态变量b
	static int b;
};

//静态变量需要类内声明类外初始化
int Son::b = 500;





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
	//s.func(100);
}

//同名静态属性处理方式
void test03() {

	//1.通过对象来访问数据
	Son s;
	cout << s.b << endl; //500
	cout << s.Base::b << endl; //100

	//2.通过类名访问数据
	cout << Son::b << endl;
	//第一个双冒号代表通过类名方式访问，第二个双冒号代表父类作用域
	cout << Son::Base::b << endl;

}

//同名静态函数处理方式
void test04() {

	//1.通过对象来访问
	Son s;
	s.func(); 
	s.Base::func();

	//2.通过类名来访问
	Son::func2();
	Son::Base::func2();
}

void main() {

	//test01();
	//test02();
	test03();
	test04();
}
*/