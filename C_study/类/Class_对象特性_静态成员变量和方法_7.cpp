/*
#include <iostream>
using namespace std;

//静态成员变量和方法

class Person {

public:

	//1.所有对象共享同一份数据
	//2.编译阶段就分配内存
	//3.类内声明 类外初始化操作
	//4.静态成员方法只能访问静态成员变量

	static int A;
	int C;
	static void func1() {
		A = 300;
		B = 666;
		//C = 909; //静态方法无法访问非静态变量，会报错
	}

	//静态成员变量和方法也是有访问权限的，类外访问不到
private:
	static int B;

	static void func2() {
		A = 300;
		B = 666;
	}
};

//类外初始化
int Person::A = 100;
int Person::B = 999;

void test01() {

	//所有对象共享同一份数据
	Person p1;
	cout << p1.A << endl;

	Person p2;
	p2.A = 200; //用p2赋值
	cout << p1.A << endl; //200
}

void test02() {
	//放文静态成员变量的两种方法
	Person p;
	cout << p.A << endl;

	cout << Person::A << endl;
}

int main(void) {
	test01();
	test02();
}
*/