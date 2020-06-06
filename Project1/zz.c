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
	int a=70;
	scanf("请输入你的成绩：%d", &a);
	if (a >= 60) {
		printf("及格");
		return 1;
	}
	else if ((a < 60) & (a > 0)) {
		printf("不及格");
		return 0;
	}
	else {
		printf("无法识别");
		return -1;
	}
}
#endif