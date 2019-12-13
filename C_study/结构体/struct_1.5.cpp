//#include <iostream>
//using namespace std;
//
////结构体起别名
//
//typedef struct student{
//	int age;
//}* st; //st 等价于 struct student *
//
//typedef struct student2 {
//	int age;
//}stu; //stu 等价于 struct student
//
//typedef struct student3 {
//	int age;
//}*stt,sts; //stt 等价于 struct student *, sts 等价于 struct student
//
//int main() {
//	struct student a1;
//	st a = &a1;
//	a->age = 99;
//	cout << a->age << endl;
//
//	stu aa;
//	aa.age = 100;
//	cout << aa.age << endl;
//
//	return 0;
//}
