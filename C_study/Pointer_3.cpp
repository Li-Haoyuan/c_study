///* 经典指针程序 两个数互换 */
//#include <stdio.h>
//
//void change_1(int, int);
//void change_2(int*, int*);
//void change_3(int*, int*);
//
//void main(void) {
//
//	int a = 5;
//	int b = 10;
//
//	//change_1(a,b);
//	//change_2(&a, &b);
//	change_3(&a, &b);
//
//	printf("a = %d, b = %d", a, b);
//}
//
//
////这个方法不能完成互换，因为是对形参进行的互换操作
//void change_1(int p,int q) {
//
//	int t;
//
//	t = p;
//	p = q;
//	q = t;
//
//}
//
////这个方法也不能完成互换,只是互换了变量里的 a b 的地址
//void change_2(int * p, int * q) {
//
//	int * t;
//
//	t = p;
//	p = q;
//	q = t;
//}
//
//void change_3(int* p, int* q) {
//
//	int t;
//
//	t = *p;
//	*p = *q;
//	*q = t;
//
//}