#include<stdio.h>
int main() {
		int a[] = {1, 2, 3, 4};
		int *p1=&a[0];
		int *p2 = a + 3;
		printf("%d" , *p2);
	}


