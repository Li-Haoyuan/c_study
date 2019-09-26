/*
#include <iostream>
using namespace std;

class Person {

public:

	//this指针的本质是指针常量（Person * const this） 指向是不可以修改的
	//在成员函数后面加入const，修饰的是this指向 让指针指向的值也不可以修改，相当于变成了 const Person * const this
	//常函数
	void showPerson() const {

		this->b = 100;
		//this->a = 100; //加入const之后 将无法修改
		//this = null; //不可以修改指向
	}

	void func() {
		this->a = 100;
	}

	int a;
	mutable int b;//加入mutable关键字之后 在常函数中也可以修改这个值
};

void test01() {
	Person p;
	p.showPerson();
}

//常对象
void test02() {
	const Person p; //加入const成为常对象
	//p.a = 100; 报错
	p.b = 100; //mutable声明的特殊值 可以修改

	//常对象只能调用常函数，因为普通函数可以修改成员属性，而常函数不能
	p.showPerson();
	//p.func(); 报错
}

void main() {
	test01();
}
*/