#include <stdio.h>

int main() {
	//a[0] --> char[10]	//普通数组，每一个单位可存储一个长度为10的字符串
	char a[][10] = {
		"Hello",
		"World",
		"dasfasdfasdfaf"
	};

	//a[0] --> char*	//指针数组，数组每个单位存储地址，这个地址指向外界的一串字符
	char *a[] = {
		"Hello",
		"World",
		"dasfasdfasdfaf"
	};

	return 0;
}

//程序参数 
