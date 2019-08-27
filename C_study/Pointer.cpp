﻿//#include <stdio.h>
//
//void main(void) {
//	int * p; //p是变量名字，int* 表示p变量存放的是int类型变量的地址
//	int i = 3;
//
//	p = &i; //OK
//	// p = i; 如果p = i;这么写就错了。因为p存的是int类型地址
//	// p = 55; 同上
//
//
//	
//	/*
//		1. p保存i的地址 因此 p指向i
//		2. p不是i，修改p的值不影响i 修改i也不影响p
//		3. 如果指针变量指向了一个普通的变量，则*指针变量 就完全等于 普通变量
//			例: p是普通指针变量， 并且p存放了普通变量i的地址 则p指向普通变量i 
//				*p就 完全相等与 i
//				*p就是以p的内容为地址的变量 p的内容为i的地址 所以 *p = i
//			int * p 不表示定义了一个名字叫*p的变量，而是p是变量名 int *是类型
//	*/
//	printf("%d", *p); //3
//}	