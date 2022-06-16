#include <stdio.h>

int main(void) {

	int i = 0;
	char *s = "Hello World";
	//s 实际上是const char* s但是由于历史的原因，编译器不带const的写法
	//如果需要修改字符串，应该用数组 char[] s = ''Hello World"
	char s3[] = "Hello World";
	//s[0] = 'B';
	char *s2 = "Hello World";

	printf("&i=%p\n", &i);
	printf("s=%p\n", s);
	printf("s2=%p\n", s2);
	printf("s3=%p\n", s3);

	//s和s2都指向程序的代码端，而且是只读的
	s3[0] = 'B';
	printf("Here!s3[0]=%c\n", s3[0]);

	//数组：这个字符串在这里，作为本地变量空间自动被回收
	//指针：这个字符串不知道在哪里，处理参数，动态分配空间

	return 0;
}