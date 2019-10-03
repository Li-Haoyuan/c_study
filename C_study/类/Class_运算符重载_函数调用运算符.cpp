/*
#include <iostream>
using namespace std;

//函数调用运算符重载
//被称为仿函数

class Print {

public:

	//重载()运算符
	void operator() (string text) {
		cout << text << endl;
	}


};

//仿函数非常灵活，没有固定写法
//加法类

class add {

public:
	int operator()(int a,int b) {
		return a + b;
	}
};

void test01(string text) {
	
	cout << text << endl;
}

void test02() {

	add a1;
	int result = a1(100, 200);
	cout << result << endl;

	//匿名函数对象
	cout << add()(100, 200) << endl; //匿名函数，当前行执行完毕立刻释放
}


void main() {

	//由于使用起来非常类似函数调用，因此被称为仿函数
	Print p1;
	p1("hello"); //调用了重载()

	test01("hello"); //正常调用函数

	test02();
}
*/