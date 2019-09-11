/*
#include <iostream>
using namespace std;

//初始化列表

class Person {

public:

	int A;
	int B;
	int C;

	//传统初始化操作
	//Person(int a,int b,int c) {
	//	A = a;
	//	B = b;
	//	C = c;
	//	cout << "调用有参构造函数" << endl;
	//}

	//利用初始化列表 初始化属性
	Person(int a, int b, int c) :A(a), B(b), C(c) {

	}

	~Person() {
		cout << "析构函数" << endl;
	}
};

int main(void) {

	Person p1(10, 20, 30);
	cout << p1.A << p1.B << p1.C << endl;
}
*/