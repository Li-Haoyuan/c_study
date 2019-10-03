/*
#include <iostream>
using namespace std;

//赋值运算符重载

class Person {

public:

	Person(int age) {
		//在堆区开辟数据 把地址交给age
		this->age = new int(age);
	}

	//析构函数
	~Person()
	{
		if (age != NULL) {
			delete age;
			age = NULL;
		}
	}

	Person& operator= (Person & p) {
		//编译器提供的浅拷贝
		//age = p.age;

		//应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
		if (age != NULL) {
			delete age;
			age = NULL;
		}

		//深拷贝操作
		this->age = new int(*p.age);

		//为了实现连等操作，返回对象自身 (p1 = p2 = p3这样的操作)
		return *this;
	}

	int* age;
};

void test01() {

	Person p1(18);
	Person p2(20);

	//浅拷贝，加入析构函数之后会有重复释放的问题
	p2 = p1;

	cout << *p1.age << endl;
	cout << *p2.age << endl;

}
void main() {
	test01();
}
*/