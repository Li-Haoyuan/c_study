/*
#include <iostream>
using namespace std;

//多态的基本
//静态多态：函数重载和运算符重载等。函数地址早绑定，编译阶段确定函数地址。
//动态多态：派生类和虚函数实现运行时的多态。函数地址皖绑定，运行阶段确定函数地址。

class Animal {
public:
	//虚函数
	virtual void speak() {
		cout << "动物在说话" << endl;
	}
};

class Cat:public Animal {
public:
	void speak() {
		cout << "小猫在说话" << endl;
	}
};

class Dog : public Animal {
public:
	 void speak() {
		cout << "小狗在说话" << endl;
	}
};

//地址早绑定，编译阶段确定函数地址。不管传什么都执行animal的speak
//如果想执行让猫说话，则这个函数的地址不能提前绑定，需要在运行阶段进行绑定，就是晚绑定。

//动态多态满足条件
//1.有继承关系
//2.子类要重写父类虚函数  //重写：函数返回值类型 函数名 参数列表 完全相同

//动态多态的使用
//父类的指针或者引用 指向子类传入的对象

void doSpeak(Animal &animal) { //Animal & animal = cat
	
	animal.speak();
}

void main() {
	Cat cat;
	Dog dog;
	doSpeak(cat);
	doSpeak(dog);

}
*/
