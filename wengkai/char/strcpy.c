#include<stdio.h>
#include<string.h>

	//char *strcpy(char *restrict dst, const char* restrict src);
	//把src的字符串拷贝到dst
	//restrict表明src和dst不重叠
	//返回dst
	//char *dst = (char*)malloc(strlen(src) +1);
	//strcpy(dst, src);
char * mycpy(char *restrict dst, const char* restrict src) {
		//int idx = 0;
		// while( src[idx] != '\0') {
		// 	dst[idx] = src[idx];
		// 	idx++;
		// }
		// dst[idx] = '\0';
		char * ret = dst;
		while (*dst++ = *src++) {
			;
		}
		*dst = '\0';
		return ret;
}
int main() {
	char s1[] = "abc";
	char s2[] = "abc";
	strcpy(s1, s2);

	return 0;

}