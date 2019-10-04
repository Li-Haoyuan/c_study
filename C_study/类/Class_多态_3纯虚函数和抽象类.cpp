/*
#include <iostream>
using namespace std;

//纯虚函数和抽象类
//多态中，通常父类中的虚函数的实现是毫无意义的，主要都是子类重写内容
//因此可以将虚函数改为纯虚函数
//当有了纯虚函数，这个类也叫抽象类

//抽象类
//特点：无法实例化对象,抽象类的子类必须重写父类的纯虚函数，否则也属于抽象类
class Base {
public:
	//纯虚函数 语法 : virtual 返回值类型 函数名(参数列表) = 0;
	virtual void func() = 0; //必须要写virtual
};

class Son:public Base {
public:
	void func() {
		cout << "子类重写被调用" << endl;
	}
};
void main() {
	//无法实例化对象
	//Base a;
	Base* b = new Son;
	b->func();
}
*/