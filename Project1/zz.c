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

#if 0
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

#if 0
int main() {
	int a, b;
	char op;
	scanf("%d %c %d",&a,&op,&b);
	switch(op){
		case '+':
			printf("%d %c %d�Ľ����:%d\n", a, op, b, a + b);
			break;
		case '-':
			printf("%d %c %d�Ľ����:%d\n", a, op, b, a - b);
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
	scanf("��������ĳɼ���%d", &a);
	if (a >= 60) {
		printf("����");
		return 1;
	}
	else if ((a < 60) & (a > 0)) {
		printf("������");
		return 0;
	}
	else {
		printf("�޷�ʶ��");
		return -1;
	}
}
#endif