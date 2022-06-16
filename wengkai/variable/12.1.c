#include <stdio.h>
int f(void);
const int gAll = 12;
//int g2 = gAll;
//没有做初始化的全局变量会得到0值
//指针会得到NULL值
//局部变量会覆盖全局变量
int main() {
	printf("in main gAll = %d\n", gAll);
	f();
	printf("agn in main gAll = %d\n", gAll);

	return 0;
}

int f(void) {
	printf("in  gAll = %d\n", gAll);
	//gAll += 2;
	printf("agn in f  gAll = %d\n", gAll);
	return gAll;
}