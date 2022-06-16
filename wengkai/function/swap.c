#include <stdio.h>

void swap(int x, int y)
{
	int t = x;
	x = y;
	y = t;
}
int main() {
	int a = 5;
	int b = 6;
	swap(a, b);
	printf("a=%d, b=%d\n", a, b);	//C语言在调用函数时，永远只能传值给函数

	//每个函数有自己独立的变量空间，参数也位于独立的空间中，和其他函数没有关系
	
	return 0;
}