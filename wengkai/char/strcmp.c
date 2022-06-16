#include <stdio.h>
#include <string.h>

int mycmp(int const char* s1, int const char* s2){
	int idx = 0;
	while(s1[idx] == s2[idx] && s1[idx] != '\0') {
		// if (s1[idx] != s2[idx]) {
		// 	break;
		// } else if ( s1[idx] == '\0') {
		// 	break;
		// }
		idx++;
	}
	return s1[idx] - s2[idx];
}
int main() {
	char s1[] = "abc";
	char s2[] = "abcd";
	printf("%d\n", mycmp(s1, s2));	//-1
	//printf("%d\n", 'a'-'A' );



	return 0;
}