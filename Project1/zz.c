#include <stdio.h>
//����ע��
#if 0

int main() {
	printf("Hello C and VS"); 
	return -1;
}
#endif

#if 0

int main() {
	int i = 1, sum = 0;
	do {
		sum += i;
		++i;
		printf("i = %3d,sum = %d\n", i, sum);
	} while (i <= 100);
	printf("1��10�ĺ�:%4d\n",sum);
	return -1;
}
#endif

#if 1

int main() {
	int i = 1, sum = 0;
	while (i <= 100) {
		sum += i;
		++i;
		printf("i = %3d,sum = %d\n", i, sum);
	}
	printf("1��10�ĺ�:%4d\n", sum);
	return -1;
}
#endif
