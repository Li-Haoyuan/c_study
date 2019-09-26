/*
#include <iostream>
using namespace std;

//构造函数和析构函数
//如果没有定义构造函数（析构函数）编译器会创建一个空构造函数（析构函数）并执行

class Person {

public:

	int age = 0;

	//普通构造函数
	//没有返回值，也不用写void，定义时函数名和类名相同
	//构造函数可以有参数，创建对象时构造函数自动调用 而且只调用一次 可以重载
	Person() {
		cout << "调用无参构造函数（也叫默认构造函数）" << endl;
	}

	Person(int a) {
		cout << "调用有参构造函数" << endl;
	}

	//拷贝构造函数
	Person(const Person &p ) {
		age = p.age;
		cout << "调用拷贝构造函数" << endl;
	}

	//析构函数
	//没有返回值 不写void ，函数名和类名相同 但是需要在名称前加上~
	//对象销毁前会自动调用，不会重复调用
	~Person() {
		cout << "调用析构函数" << endl;
	}
};

int main(void) {

	//调用构造函数
	//1.括号法 ！！最常用！！
	Person p; //无参构造函数
	Person p2(10); //有参构造函数
	Person p3(p2); //拷贝构造函数

	//括号法的坑
	//下面这样写不会调用默认构造函数，因为编译器会把它当作一个函数的声明
	Person p4(); 


	//2.显示法
	Person p5 = Person(20);//有参
	Person p6 = Person(p2);//拷贝
	Person p7; //无参

	//显示法的坑
	//①.下面这样写叫做匿名对象，没有名字 特点：当前行执行结束后立刻被释放
	Person(40); 
	cout << "aaaa" << endl;
	//②.不要用拷贝函数初始化匿名对象 编译器会认为Person(p3) === Person p3


	//3.隐式转换法
	Person p8 = 20; //相当于Person p8 = Person(20); 有参
	Person p9 = p8; //拷贝
}
*/