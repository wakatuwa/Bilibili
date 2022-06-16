#include <stdio.h>

void f(int *p);
int main() {

	// int i;
	// int *p = &i;
	// int* p ,q;
	// int *p ,q;
	int i = 6;
	printf("&i=%p\n", &i);
	f(&i);
	return 0;
}

void f(int *p){
	printf(" p = %p\n", p);	//在函数里面获得了外部的地址，函数获得了修改外界变量的能力
}