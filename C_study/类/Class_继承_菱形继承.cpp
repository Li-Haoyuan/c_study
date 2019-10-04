/*
#include <iostream>
using namespace std;

//菱形继承
//加入关键字virtual变为虚继承。animal类成为虚基类
//虚拟继承之后 数据变为一份
//动物类
class Animal {
public:
	Animal() {
		age = 100;
	}

	int age;

};

//羊类
class Sheep :virtual public Animal{
public:
	Sheep() {
		age = 20;
	}

	int age;

};

//驼类
class Camel:virtual public Animal{
public:
	Camel() {
		age = 50;
	}

	int age;


};

//羊驼类 (只是个例子 羊驼和羊和骆驼毫无关系。。)
class Alpaca :public Sheep,public Camel {

};

void test01() {
	//当菱形继承时候，拥有相同数据，需要加作用域去区分
	Alpaca al;
	al.Camel::age = 100;
	al.Sheep::age = 100;
	
	cout << al.Camel::age << endl;
	cout << al.Sheep::age << endl;

	//数据只要一份就可以，菱形继承导致数据有两份浪费资源
	//这里使用虚继承方式来解决

}

void main() {

	test01();

}
*/
