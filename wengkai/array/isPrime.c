#include <stdio.h>
int main(void) {
	const int number = 100;
	int prime[100] = {2};
	int count = 1;
	int i = 3;
	while (count < number) {
		if( isPrime(i, prime, count)){
			prime[count++] = i;
		}
		
	}
	for (i=0; i<number; i++) {
		printf("%d", prime[i]);
		if( (i+1)%5) printf("\t");
		else printf("\n");
		i++;
	}
	return 0;
}

int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes) {
	int ret = 1;
	int i;
	for (i=0; i<numberOfKnownPrimes; i++) {
		if (x%knownPrimes[i] == 0) {
			ret = 0;
			break;
		}
	}
	// if (x==1||
	// 		(x%2==0&&x!=2))
	// 	ret = 0;
	// for (i=3; i<sqrt(x); i+=2) {
	// 	if (x%i == 0){
	// 		ret = 0;
	// 		break;
	// 	}
	// }
	return ret;
}