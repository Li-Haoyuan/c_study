/*
#include <iostream>
using namespace std;

//加号运算符重载

//运算符重载同时也可以发生函数重载
//内置的数据类型表达式的运算符不能改变 例如1+1=0
class Person {

public:
	////成员函数重载加号运算符
	//Person operator+ (Person &p) {
	//	Person temp;
	//	temp.a = this->a + p.a;
	//	temp.b = this->b + p.b;
	//	return temp;
	//}
	int a;
	int b;
};

//全局函数重载加号运算符
Person operator+ (Person &a,Person &b) {
	Person temp;
	temp.a = a.a + b.a;
	temp.b = a.b + b.b;
	return temp;
}
//函数重载
Person operator+ (Person& a, int x) {
	Person temp;
	temp.a = a.a + x;
	temp.b = a.b + x;
	return temp;
}


void main() {

	Person p1;
	p1.a = 10;
	p1.b = 20;
	Person p2;
	p2.a = 30;
	p2.b = 40;

	//成员函数重载本质的调用
	//Person p3 = p1.operator+(p2);
	//全局函数重载本质的调用
	//Person p3 = operator+(p1, p2);

	Person p3 = p1 + p2;
	Person p4 = p1 + 10;
	cout << p3.a << endl;
	cout << p3.b << endl;
}
*/