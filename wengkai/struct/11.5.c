#include <stdio.h>

struct point {
	int x;
	int y;
};
//传结构给函数传的是结构指针
struct point getStruct (void);
void output(struct point);
int main() {
	struct point y = {0, 0};
	y = getStruct();
	output(y);

	return 0;
}

struct point getStruct(void) {
	struct point p;
	scanf("%d", &p.x);
	scanf("%d", &p.y);
	printf("%d, %d ", p.x, p.y);
	return p;
}

void output(struct point p) {
	printf("%d %d", p.x, p.y);
}