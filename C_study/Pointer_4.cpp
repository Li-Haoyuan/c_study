//#include <stdio.h>
//
//void main() {
//	int i[5];
//	int* a;
//	
//	for (int b = 0 ; b < 5; b++) {
//		i[b] = b;
//	}
//
//	a = i;
//
//	printf("%d\n", i[1]);
//	printf("%d\n", *(a + 1));
//
//	//结论：*(a + x) == i[X]
//
//	int* p;
//	int* q;
//	p = &i[5];
//	q = &i[1];
//	printf("%d", p - q);
//
//	//相隔几位
//}