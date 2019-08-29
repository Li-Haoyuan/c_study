/*
#include <stdio.h>

struct Student
{
	int age;
	float score;
	char sex;
}; //分号不能省略

void main() {

	struct Student st = {80,66.6,'F'}; //初始化 定义的同时赋初值

	struct Student st2;
	st2.age = 20;
	st2.score = 99.9f; //99.9默认为double类型 如果要float类型必须在后面加上f或者F
	st2.sex = 'F';

	struct Student st3;
	st3 = { 89,98,'F' };

	printf("%d %f %c",st3.age,st3.score,st3.sex);

	//取出成员

	//第一种方式
	st.age = 10;
	
	//第二种方式 常用
	struct Student* pst = &st ; 
	pst->age = 88; //pst->age 会在计算机内部转化成 (*pst).age

}
*/