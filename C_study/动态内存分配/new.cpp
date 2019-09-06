/*
#include <iostream>
using namespace std;
//用new开辟动态内存 new是创建对象 会执行构造函数 malloc只是开辟内存

int* func_1() {

	//在堆区创建整形数据
	//new返回的是该数据类型的指针
	return new int(10);//这个10是数据
}

int* func_2() {

	//在堆区创建整形的数组数据
	return new int[10];//这个10是长度
}

void main() {
	
	int* p = func_1();
	cout << *p << endl;
	//堆区数据由程序猿管理 如果想手动释放利用delete关键字

	delete p;

	int* arr = func_2();

	//释放数组的时候要加入[] 写为delete[]
	delete[] arr;
}
*/