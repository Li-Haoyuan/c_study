/*
#include <iostream>
using namespace std;

//函数重载的满足条件
//1：同一个作用域下
//2：函数名称相同
//3：函数参数类型不同，或者个数不同，或者顺序不同

//注意事项：函数的返回值不可以作为函数重载的条件

void func() {
	cout << "调的第一个" << endl;
}

void func(int a) {
	cout << "调的第二个" << endl;
}

void func(double a) {
	cout << "调的第三个" << endl;
}

void func(double a,int b) {
	cout << "调的第四个" << endl;
}

void func(int b,double a) {
	cout << "调的第五个" << endl;
}

void func2(int b, double a = 3.14) {
	cout << "调的第六个" << endl;
}

void func2(int b) {
	cout << "调的第七个" << endl;
}

void main(void) {

	func(); 
	func(10);
	func(3.14);
	func(3.14,10);
	func(10,3.14);

	//函数重载尽量不要加入默认值
	//func2(10); //func2报错 出现二义性 既可以调用第一个也可以调用第二个 编译器蒙了
}
*/