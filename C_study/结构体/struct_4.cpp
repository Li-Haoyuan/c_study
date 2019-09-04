/*
//–`–A”r˜
#include <stdio.h>

void sort(int * a,int len) {

	int t;

	for (int i = 0; i < len; i++) {
		for (int j =0 ;j < len -i-1;j++){
			if (a[j] < a[j + 1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}

void main(void) {

	int a[6] = { 10,2,6,33,-32,4 };
	sort(a,6);


	for (int i = 0; i < 6; i++) {
		printf("%d\n", a[i]);
	}

}
*/