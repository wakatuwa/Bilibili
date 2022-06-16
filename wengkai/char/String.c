#include <stdio.h>
#include <string.h>

int mysizeof(const char*s ){
	int idx = 0;
	while (s[idx] != '\0') {
		idx++;
	}
	return idx;
}

int main() {
	//strlen	size_t strlen(const char *s);//保证不会修改字符串
	//返回s的字符串长度(不包括结尾的0)
	char line[] = "Hello";
	//printf("strlen = %lu\n", strlen(line));
	printf("strlen = %lu\n", mysizeof(line));	//自写一个strlen
	printf("sizeof = %lu\n", sizeof(line));

	return 0;

}

