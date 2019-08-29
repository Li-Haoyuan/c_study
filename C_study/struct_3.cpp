#include <stdio.h>

//通过函数对结构体变量的输入和输出
struct Student
{
	int age;
	float score;
	char sex;

};
void InputStudent(struct Student *stu);
void OutputStudent(struct Student ob);
void OutputStudent_2(struct Student *ob);

void main(void) {

	struct Student st;
	InputStudent(&st);
	OutputStudent(st);
	OutputStudent_2(&st);
}

void InputStudent(struct Student* ob) {

	ob->age = 15;
	ob->score = 100;
	ob->sex = 'F';
}

//第一种写法 发送内容 发送所有数据并保存在一个新地址 占用额外内存
void OutputStudent(struct Student ob) {

	printf("%d %f %c", ob.age, ob.score, ob.sex);
}

//第二种写法 发送地址 推荐  定义指针只需要发送四个字节的地址 速度快而且节省资源
void OutputStudent_2(struct Student *ob) {

	printf("%d %f %c", ob->age, ob->score, ob->sex);
}