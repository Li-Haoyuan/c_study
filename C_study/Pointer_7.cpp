#include <stdio.h>
#include <malloc.h>

void f(int ** q) { //q也是指针变量 所以占4(8)字节
	int i = 5;
	//*q等价于p
	//*q = i; error 类型错误
	*q = &i;
}

void main(void) {
	int* p;
	f(&p);

	printf("%d", *p);
}