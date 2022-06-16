#include <stdio.h>
void f();
int main() {
	// char word[8];
	// char word2[8];
	// scanf("%s", word);
	// scanf("%s", word2);
	// //scanf读入一个单词（到空格、tab或回车为止）
	// //scanf是不安全的，他不知道要接收多大的字符串
	// printf("%s##%s##\n", word, word2);
	f();
	return 0;
}

void f(void) {
	char word[8];
	char word2[8];
	scanf("%7s", word);//在%和s之间的数字表示最多能允许读的字符数量
	scanf("%7s", word2);
	//scanf读入一个单词（到空格、tab或回车为止）
	//scanf是不安全的，他不知道要接收多大的字符串
	printf("%s##%s##\n", word, word2);
}