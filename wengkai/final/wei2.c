#include <stdio.h>

int main() {

	unsigned char c = 0Xa5;
	printf(" c=%d\n", c);
	printf(" c<<2=%d\n", c<<2);
	
	int a = 0x80000000;//四字节整数所能表达的最大负数
	unsigned int b = 0x80000000;
	printf(" a=%d\n", a);
	printf(" b=%u\n", b);
	printf(" a>>1=%d\n", a>>1);	//符号位不移动
	printf(" a<<1=%d\n", a<<1);	
	printf(" b>>1=%u\n", b>>1);
	printf(" b<<1=%u\n", b<<1);


	return 0;
}