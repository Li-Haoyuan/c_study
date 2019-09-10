/*
#include <iostream>
using namespace std;

//学生的构造体
struct student
{
	string name;
	int score = 0;
};
//老师的构造体
struct teacher 
{
	string name;
	struct student stdArray[5];
};
//赋值
void createData(struct teacher * teachers,int len) {
	//赋值嫌费劲可以用随机数 这里是手动。 随机 : rand() % 61 + 40
	for (int i = 0; i < len; i++) {
		cout << "teacherName:" << endl;
		cin >> teachers[i].name;
		for (int j = 0; j < 5; j++) {
			cout << "studentsName:" << endl;
			cin >> teachers[i].stdArray[j].name;
			cout << "studentsScore:" << endl;
			cin >> teachers[i].stdArray[j].score;
		}
	}
}
//输出
void printData(struct teacher* teachers,int len) {

	for (int i = 0; i < len; i++) {
		cout << "teacherName:" << teachers[i].name<<endl;
		for (int j = 0; j < 5; j++) {
			cout << "teacherName"<<i<<"studentsName:" << teachers[i].stdArray[j].name <<endl;
			cout << "teacherName" << i << "studentsScore:" << teachers[i].stdArray[j].score << endl;
		}
	}
}


void main(void) {

	struct teacher teachers[3];
	//动态计算 长度
	int len = sizeof(teachers) / sizeof(teachers[0]); 

	createData(teachers,len);
	printData(teachers, len);
}
*/