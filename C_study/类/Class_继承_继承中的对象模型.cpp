/*
#include <iostream>
using namespace std;

//继承中的对象模型
class Base {
public:
	int pub;
protected:
	int pro;
private:
	int pri;
};

class Son:public Base {
public:
	int son_pub;
};

void test01() {
	Son s1;
	cout << sizeof(s1) << endl; //16  父类中所有非静态成员 都会被子类继承，父类中的私有属性被编译器隐藏了，因此访问不到。但是却继承了下来
}

void main() {
	test01();

}
*/