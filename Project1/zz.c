
#if 0
#include <stdio.h>
int main() {
	printf("Hello C and VS"); 
	return -1;
}
#endif

#if 1
#include <stdio.h>
int main() {
	int i = 1, sum = 0;
	do {
		sum += i;
		++i;
		printf("i = %3d,sum = %d\n", i, sum);
	} while (i <= 100);
	printf("1µ½10µÄºÍ:%4d\n",sum);
	return -1;
}
#endif