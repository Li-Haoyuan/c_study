/*
#include <iostream>
using namespace std;

//制作饮品
//抽象类
class AbstractDrinking {
public:
	virtual void Boil() = 0; //煮水
	virtual void Brew() = 0;	//冲泡
	virtual void PourInCup() = 0;	//倒入杯中
	virtual void PutSomething() = 0;	//加入辅料

	//制作
	void MakeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//制作咖啡
class MakeCoffee :public AbstractDrinking {
	void Boil() {
		cout << "煮水" <<  endl;
	}
	void Brew() {
		cout << "冲泡coffee" << endl;
	}
	void PourInCup() {
		cout << "倒杯里" << endl;
	}
	void PutSomething() {
		cout << "加入糖和牛奶" << endl;
	}
};

//制作茶
class MakeTea :public AbstractDrinking {
	void Boil() {
		cout << "煮水" << endl;
	}
	void Brew() {
		cout << "冲泡tea" << endl;
	}
	void PourInCup() {
		cout << "倒杯里" << endl;
	}
	void PutSomething() {
		cout << "加入枸杞" << endl;
	}
};

void test01() {
	AbstractDrinking* abs = new MakeCoffee();
	abs->MakeDrink();
	delete abs;

	abs = new MakeTea();
	abs->MakeDrink();
	delete abs;
}
void main() {
	test01();
}
*/