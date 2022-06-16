#include <stdio.h>
#define cube(x) ((x)*(x)*(x))
int main() {
	printf("%d\n", cube(5));

	return 0;
}

//带参数的宏的原则
//整个之要括号
//参数出现的每个地方都要括号