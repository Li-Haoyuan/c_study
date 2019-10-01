/*
#include <iostream>
using namespace std;

//左移运算符重载 左移运算符->「<<」

class Person {

public:

	//成员函数重载加号运算符
	//不会利用成员函数去重载左移运算符，因为无法实现cout在左侧
	//Person operator<< (cout) {
	//}
	int a;
	int b;
};

//只能通过全局函数重载左移运算符
//cout属于标准输出流的对象 右键cout可以查看定义，全局只允许存在一个cout 所以要使用引用

ostream & operator<< (ostream &cout , Person p){ //本质operator<<(cout ,p),简化形式可以写成 cout << p

	cout << p.a << p.b << endl;
	return cout;
}

void main() {
	Person p;
	p.a = 10;
	p.b = 90;
	cout << p << 'a' << endl;
}
*/