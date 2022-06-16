#include <stdio.h>

int main() {
	//指向结构的指针
	struct date {
		int month;
		int day;
		int year;
	} myday;

	struct date *p = &myday;
	p -> month = 12;//用->表示指针所指的结构变量中的成员
	return 0;
}