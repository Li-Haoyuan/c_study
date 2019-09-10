/*
#include <iostream>
using namespace std;

//交换值
//引用传递来改变实参
void change(int &a,int &b) {

	int t;
	
	t = a;
	a = b;
	b = t;
}

void main() {

	int a = 10;
	int b = 20;

	change(a,b);

	cout << a <<endl;
	cout << b << endl;
}
*/