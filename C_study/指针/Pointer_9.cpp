/*
#include <iostream>
using namespace std;

//const修饰指针

void main() {
	int a = 10;
	int b = 20;

	//int* p = &a; 指针

	//常量指针
	//特点:指针的指向可以改，指针指向的值不可以改。
	const int* p = &a;
	
	//*p = 20; //错误 不能改变指向的值
	//p = &b; //正确 可以改变指向


	//指针常量
	//特点：指向不可以改，但是指向的值可以更改。
	int* const p = &a;

	//*p = 20; //正确
	//p = &b; //错误


	//const即修饰指向又修饰常量
	//特点：什么都不可以改
	const int* const p = &a;

	//*p = 20; //错误
	//p = &b; //错误
}
*/ 