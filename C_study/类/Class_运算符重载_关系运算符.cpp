/*
#include <iostream>
using namespace std;

//关系运算符重载

class Person {

public:

	Person(string name ,int age) {
		
		this->name = name;
		this->age = age;
	}

	//重载==运算符  !=,>,<都同理
	bool operator== (Person& p) {
		if (this->name == p.name && this->age == p.age) {
			return true;
		}
	}

	string name;
	int age;

};

void test01() {

	Person p1("bibi", 18);
	Person p2("bibi", 18);

	if (p1 == p2) {
		cout << "same" << endl;
	}
	else {
		cout << "not same" << endl;
	}
}

void main() {
	test01();
}
*/