/*
#include <iostream>
using namespace std;

//继承中的对象模型
class Base {
public:
	Base() {
		cout << "父类构造函数" << endl;
	}

	~Base()
	{
		cout << "父类析构函数" << endl;
	}
};

class Son :public Base {
public:
	Son() {
		cout << "子类构造函数" << endl;
	}

	~Son()
	{
		cout << "子类析构函数" << endl;
	}
};

void test01() {

	Son a;
	//先构造父类 在构造子类
	//析构的顺序 相反
}

void main() {

	test01();
}
*/