/*
#include <iostream>
using namespace std;

void main(void) {

	int a = 10;

	//创建引用变量。
	//引用必须要初始化，不能写成int &b;
	int& b = a; //系统会把这部自动更改为生成一个指针常量 ---> int * const b = &a; 

	cout << a << endl;
	//通过b也可以修改a的值

	b = 200; //系统会把这部自动更改为 *b = 20; 
	cout << a << endl;

	//引用一旦初始化后，就不能修改
	int c = 900;

	//这个不是更改引用而是赋值操作
	b = c;

	cout << a << endl;
}
*/