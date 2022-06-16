#include <stdio.h>
int main() {
	//putchar 向标准输出写一个字符 返回写了几个字符 eof(-1)表示写失败
	//getchar 从标准输入读入一个字符 返回类型是int是为了返回eof(-1)
	//输入Ctrl+Z 会跳出

	int ch;
	while ((ch = getchar())!=EOF) {
		putchar(ch);
	}

	printf("EOF\n");

	return 0;
}