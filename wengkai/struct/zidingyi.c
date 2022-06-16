#include <stdio.h>
//C语言提供了一个typedef的功能来声明一个已有的数据类型的新名字
//比如 typedef int length;
//新的名字是某种类型的别名
typedef long int64_int;
typedef struct {
	int month;
	int day;
	int year;
} Date;

typedef struct node {
	int data;
	struct node *next;
} aNode;
int main() {	
	return 0;
}