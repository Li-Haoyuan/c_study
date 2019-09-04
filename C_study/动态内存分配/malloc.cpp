/*
# include <stdio.h>
# include <malloc.h>

void main(void) {

	int a = 5; //静态分配4字节

	int* p = (int*)malloc(4); //需要引入malloc.h　4的含义是 请求系统分出4字节空间 返回地址

	free(p); //表示吧p所指向的内存释放掉。"p本身的内存是静态的，不能手动释放"
}
*/