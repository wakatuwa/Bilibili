#include <stdio.h>
#include <stdlib.h>

int main(void) {
	void *p = 0;
	int i;
	int cnt = 0;
	// while ((p=malloc(100*1024*1024))) {
	// 	cnt++;
	// }
	// printf("%分配了%d00MB的空间\n", cnt);
	//	p = &i;
	p++;
	free(p);
	return 0;
}