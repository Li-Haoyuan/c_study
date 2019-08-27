/*
#include <stdio.h>

void main(void) {
	char a = 'A'; //1
	int b = 6666; //4
	double c = 66.66; //8

	char* d = &a;
	int* e = &b;
	double* f = &c;

	printf("%d %d %d \n", sizeof(a), sizeof(b), sizeof(c)); //分别占用字节 1,4,8

	printf("%d %d %d \n", sizeof(d), sizeof(e), sizeof(f)); //分别占用字节 8,8,8(32位电脑的话是4) 指针变量不论类型占用字节都是8(4)
}
*/