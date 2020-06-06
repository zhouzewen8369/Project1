#include <stdio.h>
//试试注释
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
	printf("1到10的和:%4d\n",sum);
	return -1;
}
#endif

#if 0
int main() {
	int i = 1, sum = 0;
	while (i <= 100) {
		sum += i;
		++i;
		printf("i = %3d,sum = %d\n", i, sum);
	}
	printf("1到10的和:%4d\n", sum);
	return -1;
}
#endif

#if 0
int main() {
	int a, b;
	char op;
	scanf("%d %c %d",&a,&op,&b);
	switch(op){
		case '+':
			printf("%d %c %d的结果是:%d\n", a, op, b, a + b);
			break;
		case '-':
			printf("%d %c %d的结果是:%d\n", a, op, b, a - b);
			break;
		default:
			printf("can't recognize");
			break;
	}
}
#endif

#if 1
int main() {
	float a; 
	scanf("%f", &a);
	if (a >= 60) {
		printf("分数是 %4.1f \n",a);
		printf("pass\n");
		return 1;
	}
	else {
		printf("no pass\n");
		return 0;
	}
}
#endif