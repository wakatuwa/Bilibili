#include <stdio.h> 
int main() {
	// printf("%09d\n", 123);
	// printf("%-9d\n", -123);
	// printf("%9.2f\n", 123.0);
	// printf("%hhd\n", 12345);
	int num;
	printf("%hhd\n", 12345, &num);
	printf("%d\n", num);
	
	return 0;
}