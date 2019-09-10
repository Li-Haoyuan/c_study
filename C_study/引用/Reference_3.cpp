/*
#include <iostream>
using namespace std;

//不要返回局部变量的引用
//因为函数执行完毕后会释放在栈区中的变量
int& test01() {
	int a = 10;
	return a;
}

//函数执行完毕后a不会被释放
//static声明的变量被保存在全局区，整个程序执行完毕后才会被释放
int& test02() {
	static int a = 10;
	return a;
}

void main() {

	int &a = test01();

	cout << a << endl; //第一次输出没有乱码是因为编译器做了一次保存
	cout << a << endl; //局部变量a已经被释放 引用到一个垃圾值

	int& b = test02();

	cout << b << endl; // 10
	test02() = 1000; //如果函数返回的是一个引用 则可以当左值 进行赋值操作
	cout << b << endl; // 1000

}
*/