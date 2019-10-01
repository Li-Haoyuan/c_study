/*
#include <iostream>
using namespace std;

//递增(递减)运算符重载

class Num {
	friend ostream& operator<<(ostream& cout, Num n);
public:
	Num() {
		my_num = 0;
	}
	//重载前置++运算符
	//返回值必须是引用形式，如果不是则每一次都对新的对象进行递增处理
	Num & operator++() {
		//先++运算 在将自身返回
		my_num++;
		return *this;
	}

	//重载后置++运算符
	//参数里写int，int是占位参数， 用于区分为后置++运算符重载
	//后置递增一定要返回值而不是引用。因为局部变量会被清空，如果返回引用则下面就是非法操作
	Num operator++(int) {
		Num temp = *this;
		my_num++;
		return temp;
	}



private:
	int my_num;
};

//左移运算符重载
ostream& operator<<(ostream &cout ,Num n) {

	cout << n.my_num;

	return cout;

}

void main() {

	Num t1;
	Num t2;
	cout << ++t1 << endl;
	cout << t2++ << endl;
	cout << t2 << endl;
}
*/