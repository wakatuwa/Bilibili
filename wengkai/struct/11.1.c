#include <stdio.h>

enum color {red, yellow, green};
void f(enum color c);
int main() {
	// enum 枚举类型名字{名字0,...,名字n};
	// enum colors{red, yellow, green};
	enum color t = 0;
	scanf("%d", &t);
	f(t);

	return 0;
}

void f(enum color c) {
	printf("%d\n", c);
}