/*
结构体 定义新的数据类型模拟学生类型
把一些基本类型数据组合在一起 形成新的复合数据类型 就叫做结构体
*/

/*
#include <stdio.h>



//第一种定义结构体方式
struct Student
{
	int age;
	float score;
	char sex;
};

//第二种定义结构体方式 定义结构体时直接定义变量名 *但是只能使用一次！ 不推荐
struct Student2
{
	int age;
	float score;
	char sex;
} st2;

//第三种方式 不推荐 连名都没有
struct
{
	int age;
	float score;
	char sex;
} st3;

void main(void) {
	struct Student st = {21,99.9,'F'}; //用数据类型定义一个变量
}
*/