//# include <stdio.h>
//
//int main(void) {
//
//	int b ,c ,d;
//
//	printf("请输入三个值");
//	//scanf_s("%d",&b); scanf_s 是安全赋值 scanf在读取时不检查边界，所以可能会造成内存泄露。
//	//scanf_s("m%d", &b); 前面多一个非输入控制符 非输入控制符必须要原样输入。
//	//scanf_s("%d %d %d",&b,&c,&d); 一次为多个变量赋值，输入的时候两个数之间要加空格。**如果写成"%d,%d,%d" 则【,】必须输入，属于非输入控制符。
//	printf("b = %d , c = %d , d = %d", b, c, d);
//
//	return 0;
//}