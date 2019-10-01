/*
#include <iostream>
using namespace std;

//友元的第2种 类做友元
//友元的第3种 成员函数做友元 格式：friend void 类名::成员函数名();
class building {

	//用friend关键字 做成友元
	friend class admin;

public:
	building();

	string SittingRoom;

private:
	string BedRoom;
};

//类外进行构造函数的实现
building::building() {
	SittingRoom = "客厅";
	BedRoom = "卧室";
}

class admin {

public:
	admin();
	void visit(building* b);

};

//类外进行构造函数的实现
admin::admin() {
	building *a = new building;
	visit(a);
}

void admin::visit(building *b) {
	cout << b->BedRoom << endl;
}

void main() {
	admin c;
}
*/