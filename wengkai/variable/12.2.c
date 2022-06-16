#include <stdio.h>
//在本地变量定义时加上static修饰符就成为静态本地变量
//当函数离开的时候，静态本地变量会继续存在并保持其值
//静态本地变量实际上是特殊的全局变量
//它们位于相同的内存区域
//静态本地变量具有全局的生存期，函数内的局部作用域
int f(void);
int gAll = 12;
int main() {
	f();
	f();
	f();
	return 0;
}

int f(void) {
	static int all = 1;
	printf("%d\n", all);
	all += 2;
	printf("%d\n", all);
	return all;
}