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

#if 0
int main() {
	float a; 
	scanf("%f", &a);
	if (a >= 60) {
		printf("������ %4.1f \n",a);
		printf("pass\n");
		return 1;
	}
	else {
		printf("no pass\n");
		return 0;
	}
}
#endif

#if 0
//array
#include <stdio.h>
int main() {

	//array[n]
	int a[5];
	a[1] = 4;
	for (int i = 0; i < 5; i++) {
		a[i] = i+5;
		printf("%d\t", a[i]);
	}
	printf("\n");

	//array[n]={0,1,2,3,4}
	int a1[5] = { 0,1,2,3,4 };
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a1[i]);
	}
	printf("\n");

	//array[]={0,1,2,3,4}
	int a2[] = { 0,1,2,3,4 };
	int len_a2 = sizeof(a2);
	printf("sizeof(a2):%d\n", len_a2);
	//���鶨��ʱĬ�Ϸ���20��
	//for (int i = 0; i < sizeof(a2); i++) {
		//������19�������ˡ�0������4������Ч��Χ(���ڿ����ڶ�ջ�з���Ļ�������a2��)��
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a2[i]);
	}
	printf("\n");

	//array[n]= for����
	int a3[5];
	for (int i = 0; i < 5; i++) {
		a3[i] = 2 * i + 5;
		printf("%d\t", a3[i]);
	}
	printf("\n");
}
#endif 

#if 0
#include <stdio.h>
int main() {
	float scores[100], score=0, sum = 0;
	int n = 0;
	while (1){
		printf("Add a score please: ");
		scanf("%f", &score);
		if (score < 0) {
			printf("%d students' scores are as below:\n",n);
			break;
		}
		scores[n] = score;
		n++;
		sum += score;
		printf("Received %d students' scores.\n", n);
	}
	for (int i = 0; i < n; i++) {
		printf("%5.2f\n", scores[i]);
	}
	printf("Average scores:%5.2f\n", sum / n);
}
#endif

#if 0
//���庯��������������define function 
//����ֵ�����������β�
void f(int n) {
	for (int i = 0; i < n; i++) {
		printf("%d zhouzw\n",i);
		//return 0  //������ֱ�Ӵ�main��������
	}
}
int main() {
	//���ú�����ʵ�Σ���������
	f(3);
	return 1;
}
#endif

#if 1
#include <stdio.h>
int add(int a, int b) {
	printf("%d", a + b);
}
int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	add(x, y);
}
#endif
