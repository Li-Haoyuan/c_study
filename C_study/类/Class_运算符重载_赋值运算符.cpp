#include <iostream>
using namespace std;

//赋值运算符重载

class Person {

public:

	Person(int age) {
		//在堆区开辟数据 把地址交给age
		this->age = new int(age);
	}

	int* age;
};

void test01() {

	Person p1(18);
	Person p2(20);

	p2 = p1;

	cout << *p1.age << endl;
	cout << *p2.age << endl;

}
void main() {
	test01();
}
