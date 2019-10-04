/*
#include <iostream>
using namespace std;

//虚析构和纯虚析构
//如果子类有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码

class Animal {
public:
	Animal() {
		cout << "animal构造函数" << endl;
	}

	//利用虚析构可以解决父类指针释放子类对象时不干净的问题
	//virtual ~Animal()
	//{
	//	cout << "animal析构函数" << endl;
	//}

	//纯虚析构也可以解决。
	//但是需要具体的实现，否则编译错误
	//有纯虚析构之后，这个类也属于抽象类无法实例化
	virtual ~Animal() = 0;

	//纯虚函数
	virtual void speak() = 0;
};

//纯虚析构的实现
Animal::~Animal() {
	cout << "animal析构函数" << endl;
}

class Cat : public Animal {
public:
	Cat(string name) {
		cout << "cat构造函数" << endl;
		this->name = new string(name);
	}

	void speak() {
		cout << *name <<"小猫在说话" << endl;
	}

	//堆区属性需要释放
	~Cat()
	{
		if (name != NULL) {
			cout << "cat析构函数" <<endl;
			delete name;
			name = NULL;
		}
	}
	string * name;
};

void test01() {
	Animal* ani = new Cat("Tom");
	ani->speak();
	//父类指针在析构时候，不会调用子类中的析构函数，导致子类如果有堆区属性，会内存泄漏
	delete ani;
}

void main() {
	test01();
}
*/