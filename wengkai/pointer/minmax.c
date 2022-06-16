#include <stdio.h>

void minmax(int a[], int len, int *max, int *min);

int main(void ) {
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13, 14, 16, 17, 21, 23, 55,};

	int min, max;
	printf("main sizeof(a)=%lu\n", sizeof(a));
	//函数参数表中数组其实是指针，数组变量是特殊的指针(是一个常量指针)
	//但是数组的单元表达的是变量，需要用&取地址
}