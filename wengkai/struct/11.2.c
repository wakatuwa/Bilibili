#include <stdio.h>
int main() {
	struct date {
		int month;
		int day;
		int year;
	};
	// //struct {
	// 	int x; 
	// 	int y;
	// 	}p1 p2; 
	// 

	//struct point {
		// 	int x;
		// 	int y;
		// }p1, p2;
	struct date today;
	today.month = 07;
	today.day = 31;
	today.year = 2014;

	printf("Today's date is %i-%i-%i.\n",
	today.year, today.month, today.day);
	//和本地变量一样，在函数内部声明的结构类型只能在函数内部使用
	//通常在函数外部声明结构类型，这样就能在全局使用

	struct date thismonth = {.month=7, .year=2014};
	printf("This month is %i-%i-%i.\n",
		thismonth.year, thismonth.month, thismonth.day
	);
	return 0;
}