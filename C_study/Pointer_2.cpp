﻿#include <stdio.h>

/* 

常见错误1 
void main(void) {
	int * p;
	int i = 5;

	*p = i;//此时会报错，*p是一个没有初始化的 垃圾地址（不知道的地址），这一步操作就会把一个不知道的地址的值更改为5.越界。系统会强制终止

	printf("%d\n", *p);

}

*/



/*

常见错误2
void main(void) {

	int i = 5;
	int* p;
	int* q;

	p = &i;
	//*q = p 语法错误 地址无法赋值给一个int变量
	//*q = *p 参考上面
	p = q;  //q是垃圾值 这样p也变成垃圾值

	//q的空间属于本程序，所以本程序可以读写q的内容（有的不能读只能写入），如果q内部是垃圾值，则不能读写*q 因为*q的内存单元的控制权限并没有分配给本程序
	
}

*/
