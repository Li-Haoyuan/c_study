/*
#include <iostream>
using namespace std;

//结构体嵌套结构体

struct student {
	string name;
	int age;
	int score;
};

struct teacher {
	int id; //编号
	string name; //姓名
	int age; //年龄
	struct student stu; //辅导的学生
};

void main() {
	
	teacher laoshi1 = { 1,"张三",50,{"赵四",16,100} };

	cout << "老师姓名：" << laoshi1.name << endl;
}

*/