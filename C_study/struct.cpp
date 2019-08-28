#include <stdio.h>

//结构体 新的数据类型模拟学生类型
//把一些基本类型数据组合在一起 形成新的复合数据类型 就叫做结构体
struct Student
{
	int age;
	float score;
	char sex;
};

void main(void) {
	struct Student st = {21,99.9,'F'}; //用数据类型定义一个变量
}