#include <stdio.h>
//const double PI = 3.14159;
#define PI 3.14159
#define FORMAT "%f\n"	
#define PI2 2*PI	//pi*2
#define PRT printf("%f", PI);\
			printf(" %f\n", PI2)
//#开头的是编译预处理指令
//他们不是C语言的成分，但是C语言程序离不开他们
//#define用来定义一个宏
//在C语言的编译器开始编译之前，编译预处理程序会把程序中的名字换成值
//完全的文本替换
//define _DEBUG
//这类宏是用于条件编译的
int main() {
	PRT;
	return 0;
}