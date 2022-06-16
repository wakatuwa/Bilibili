#include <stdio.h>
#include <string.h>

int main() {
	char s[] = "hello";
	char *p = strchr(s, 'l');
	//p = strchr(p+1, 'l');
	char c = *p;
	*p = '\0';

	char *t = (char*)malloc(strlen(s) + 1);
	strcpy(t, s);
	printf("%s\n", t);
	free(t);

	return 0;
}