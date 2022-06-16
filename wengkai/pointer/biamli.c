#include <stdio.h>
int main(void) {
	char ac[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1};
	char *p = &ac[0];
	int i;
	for(int i = 0; i<sizeof(ac)/sizeof(ac[0]);i++) {
		printf("%d\n", ac[i]);
	}

	//for (p=ac;*p!=-1 ;p++) 
	while(*p!= -1){
		printf("%d\n", *p++);
	}

	int ai[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *q = ai;
	//q = p;	void*表示不知道指向什么东西的指针 
	//指针也可以转换类型 int*p = &i; void *q = (void*)p; //这里并没有改变p所指向的变量的类型，而是让后人用不同的眼光通过p看它所指的变量
	//
	return 0;
}