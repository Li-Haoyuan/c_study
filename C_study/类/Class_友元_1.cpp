/*
#include <iostream>
using namespace std;

//友元的第一种 全局函数做友元

class building {

	//用friend关键字 做成友元 
	friend void test01(building& b);

public:
	building() {
		SittingRoom = "客厅";
		BedRoom = "卧室";
	}
	
	string SittingRoom;

private:
	string BedRoom;
};


void test01(building& b) {
	cout << b.SittingRoom << endl;
	//私有变量是无法在类外访问的，成为友元之后就可以访问
	cout << b.BedRoom << endl; 
}

void main() {
	building b;
	test01(b);
}
*/