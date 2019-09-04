/*
#include <stdio.h>
#include <malloc.h>

void main(void) {

	int a[5]; //20字节 每四个字节当作一个int来使用 静态数组
	int len;
	int* pArr;
	int i;

	printf("请输入长度:");
	scanf_s("%d",&len);

	pArr = (int*)malloc(4 * len); //就相当于int pArr[len] 动态数组
	//输入
	for (i = 0; i < len; i++) {
		scanf_s("%d", &pArr[i]);
	}
	//输出
	for (i = 0; i < len; i++) {
		printf("%d", pArr[i]);
	}

	free(pArr); //释放掉动态数组

	//realloc函数可以 重新分配数组大小 realloc(pArr,1000); => 把内存变成1000 而不是加1000
}
*/