/*
#include <iostream>
using namespace std;

class Person {

public :
	Person(int age) {
		//this指针指向 被调用的成员函数 所属的对象(谁调的这个函数 this就指向谁)
		this->age = age;
	}

	//引用传递
	//为什么返回类型是person&而不是person 原因是拷贝构造函数，如果不加&的话 每一次返回都是一次新的拷贝数据，如果加上& 则每次都对同一份数据进行修改
	Person& PersonAddAge(Person &p) { 

		this->age += p.age;
		//this是指向p1的指针，*this就是指向p1的本体
		return *this;
	}

	int age;
};

void test01() {

	Person p1(18);
	Person p2(20);

	p1.PersonAddAge(p2);
	cout << p1.age << endl;

}

void test02() {

	Person p1(18);
	Person p2(20);

	//链式编程思想
	p1.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2);
	cout << p1.age << endl;

}

void main() {

	//test01();
	test02();
}

*/