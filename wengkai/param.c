#include <stdio.h>

void cheer(int i) 
{
	printf("cheer %d\n", i);
}

int main() 
{
	//调用函数时给的值与参数的类型不匹配是C语言传统上最大的漏洞
	cheer(2.4);

	return 0;

}