//Created by zhouzw
//Learn C in Visual Studio by watching hw-dong's videos in Bilibili 
//https://www.bilibili.com/video/BV1Wt41127xf
//Thanks a lot.

#include <stdio.h>
//main��printf��return
#if 0
int main() {
	printf("Hello C and VS"); 
	return -1;
}
#endif

//3 �������-���� if���жϳɼ��Ƿ񼰸�
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
//3 �������-���� switch-case������������ͬ�����
#if 0
int main() {
	int a, b;
	char op;
	scanf("%d %c %d", &a, &op, &b);
	switch (op) {
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
//3 �������-ѭ�� do-while��while��for��1��100���
#if 0
void main() {
	int i = 1, sum = 0, n = 3;
	do {
		sum += i;
		++i;
		printf("i = %3d, sum = %3d\n", i, sum);
	} while (i <= n);
	printf("1��%d�ĺ�: %d\n", n, sum);

	i = 1, sum = 0, n = 10;
	while (i <= n) {
		sum += i;
		++i;
		printf("i = %3d, sum = %3d\n", i, sum);
	}
	printf("1��%d�ĺ�: %d\n", n, sum);

	i = 1, sum = 0, n = 100;
	for (i = 1; i <= n; i++) {
		sum += i;
		printf("i = %3d, sum = %3d\n", i, sum);
	}
	printf("1��%d�ĺ�: %d\n", n, sum);
}
#endif

//4 array������
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
//4 ����score������Ϊ����scores
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

//5 ���庯��������������define function 
#if 0
//����ֵ�����������β�
void f(int n) {  //void �յģ���Ч��
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
//5 ���庯��add���������
#if 0

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
//5 �ж��Ƿ�Ϊ������for��if��while
#if 0
void zhishu(int x) {
	int flag = 0;
	for (int i = 2; i < x; i++) { //i��2��x-1
		//���x�ܱ�1���䱾�����������������x��������
		if (x % i == 0) {
			printf("%d\t", i);
			flag = 1;
		}		
	}
	if (flag == 0) {
		printf("%d������\n", x);
	}
	else if(flag == 1) {
		printf("\n%d��������\n", x);
	}
}

int main() {
	int num = 0;
	while (1) {
		scanf("%d", &num); 
		//��������ʱֻ����׼ȷ����������
		//����������������ַ��������ѭ��ִ��
		if (num > 0) {
			zhishu(num);
		}
		else break;
	}
}
#endif
//5 ���100���ڵ���������
#if 0
int zhishu(int x) {
	int flag = 0;
	for (int i = 2; i < x/2; i++) { //i��2��x-1
		//���x�ܱ�1���䱾�����������������x��������
		if (x % i == 0) {
			flag = 1;
			break;
		}
	}
	return flag;
}
int main() {
	for (int i = 1; i < 100; i++) {
		if (!zhishu(i)) { printf("%d������\n", i); }
	}
}
#endif
//5 forѭ�����׳˼���
#if 0
int jiecheng(int x) {
	int y = 1;
	for (int i = 1; i < x + 1; i++) {
		y = y * i;
	}
	return y;
}
int main() {
	int x;
	scanf("%d", &x);
	printf("%d", jiecheng(x));
}
#endif
//5 �ݹ飬�׳˼���
#if 0 
//�ݹ�("����") 
//1.�����Ρ��������ٷֽ⡣��С��"����"  
//2.�ֽ����Ρ��ѹ�ģ���ת��Ϊ��ģС�ģ������ޡ�ͨ��ѭ���Ѵ��һ��һ���Ƕ����ȥ��
int jiecheng(int x) {
	//��С����
	int y = 1;
	if ((x == 1) || (x == 0)) {
		return y;
	}
	//���Լ�����̫�ף���Ӳ��
	else if (x > 1) {
		y = x * jiecheng(x - 1);
		return y;
	}
	else {
		printf("������������\n");
	}
}
int main() {
	int x;
	scanf("%d", &x);
	printf("%d", jiecheng(x));
}
#endif

//6 ָ�룬����������ͨ��ָ�������ֵ���ַ����顢��������
#if 0
#include <string.h>
void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main() {
	int a = 3, b = 7, * d = &a;
	char crr[] = { 'h','e','l','l','o' }, * p = crr, * q = &crr[5];
	//��������
	printf("ԭ���ģ�%d, %d\n", a, b);
	swap(&a, &b);
	printf("������%d, %d\n", a, b);

	printf("%d, %d\n", a, *d);
	//��ӡ��ַ
	printf("%p, %p\n", &a, d);
	//ͨ��ָ�������ֵ
	*d = 5;
	printf("%d, %d, %d\n", a, *d, b);
	b = *d + 2;
	printf("%d, %d, %d\n", a, *d, b);

	printf("ԭ���ģ�%c, %c\n", *p, crr[0]);
	crr[0] = 'H';
	printf("��д�ģ�%c, %c\n", *p, crr[0]);
	for (; p < q; p++) {
		printf("%c",*p);
	}
	printf("\n");
}
#endif
//6 ָ�룬ͨ��ָ����� ������������ �������ӡ�� *(p+2)�൱��p[2]��
#if 0
int main() {
	int arr[5] = { 0,1,2,3,4 };
	int* p = arr; // ע�⣡��int* p = &arr[0]
	printf("%p, %p, %p\n", p, arr, &arr[0]);

	printf("%d, %d\n", p[0], arr[0]);
	printf("%d, %d\n", *p, *arr);

	//ע�⣡��*(p+2)�൱��p[2]
	printf("%d, %d\n", *p + 2, arr[2]);
	printf("%d, %d\n", p[2], *arr+2);
	int b = p[3];
	printf("%d, %d\n", b, arr[3]);

	//while��forѭ���������ӡ����Ԫ��
	while (p < &arr[5]) {
		printf("%d  ", *p);
		p++;
	}
	printf("\n");
	for (p = arr; p < &arr[5]; p++) { 
	//����p��Ҫ���³�ʼ��
		printf("%d  ", *p);
	}
	printf("\n");
	p -= 2; //forѭ����� p=&arr[5]
	printf("%d\n", *p); //���3
}
#endif
//6 �Զ���Print����������һ��ָ��p
#if 0
#include <stdlib.h>
//���� �����ӡ�ַ����� �ĺ���
void Print(char crr[],int n) {
	for (char*p = crr; p < &crr[n]; p++) {
		printf("%c  ", *p);
	}
	printf("\n");
}
int main() {
	int a = 6; char s[6];
	_itoa(a, s, 2);  //_itoa: int to array
	printf("%s\n", s);
	Print(s, 5);

	char crr[] = { 'h','e','l','l','o' }, ch, * p = &ch;
	*p = 'H'; //�� ch = 'H';
	crr[0] = ch;
	Print(crr, 5);

	p = crr; // p = &crr[0]��
	*(p + 2) = 'L'; //��δ�ı�p����
	Print(crr, 5);

	p++; //��ʱ p = &crr[1]��
	*p = 'E';
	Print(crr, 5);
}
#endif
//6 ͨ��ָ�� ���ַ�����hello �ĳ�ABCDE
#if 0
void main() {
	char crr[] = { 'h','e','l','l','o' }, * p, * q;
	p = crr;
	q = crr + 5;
	while (p < q) {
		printf("%c\t", *p);
		p++;
	}
	printf("\n");
	p = crr;
	*p = 'A';
	p++;
	while (p < q) {
		*p = *(p - 1) + 1;
		p++;
	}
	for (p = crr; p < q; p++) {
		printf("%c\t", *p);
	}
}
#endif
//6 �ַ����������ַ�'\0'; C������ �ַ��õ����ţ��ַ�����˫���ţ��Զ���Strcpy������
#if 0
#include <string.h> //<string.h>�ַ�����������ͷ�ļ�;
void Print(char crr[], int n) {
	//crr[]:�ַ����顢�ַ�����ָ��,ע����ָ�룡�൱�� char* crr�� 
	//n:ϣ����ʾ���ַ�����
	for (char* p = crr; p < &crr[n]; p++) {
		printf("%c  ", *p);
	}
	printf("\n");
}
//�����Զ���strcpy��ָ���ƶ��������ֵ��ʵ�ָ���
void Strcpy(char* crr, char* s) {
	//���ܣ���*s���Ƹ�*crr
	char* p = crr; //char* p = &crr[0];
	char* q = s;
	while (*q != '\0') {
		*p = *q;
		p++;
		q++;
	}
}
void main() {
	char arr[] = { 'h','e','l','l','o' };
	char str[] = { 'h','e','l','l','o','\0' };
	char* p = "hello";
	printf("%zd, %zd\n", strlen(arr), strlen(str));
	Print(arr, 5); //ʹ���Զ���Print����
	Print(str, 5); //ͬ������ʹ��
	Print(p, 5);
	printf("%s\n", arr); //��������
	printf("%s\n", str); //'\0'��������
	printf("%s\n", p); //��Ȼ��Ӧ�� char* p = "hello"; ���ֶ��巽ʽ���㣻

	strcpy(str, "WORLD"); printf("%s\n", str);
	//strcpy(arr, "WORLD"); printf("%s\n", arr);  //����
	arr[4] = '\0'; //�����һ���ַ��޸�Ϊ'\0'��ʹ��strcpy������
	strcpy(arr + 2, "LL"); printf("%s\n", arr);

	Strcpy(str, &"yes"[0]); //Strcpy(str, "yes"); 
	printf("%s\n", str);
}
#endif

//7 struct�ṹ�壬ѧ����Ϣ��
#if 0
#include<stdio.h>
#include<string.h>

struct Stu {
	char name[10]; 
	int age;
	double score;
};
int main() {
	struct Stu zzw;
	struct Stu* p;
	p = &zzw;
	
	//zzw.
	strcpy(zzw.name, "zhouzw"); //ע�⣡��name��ָ��,Ҫʹ��strcpy
	zzw.age = 24;
	zzw.score = 89.35;
	printf("1---%d���%s�ĳɼ���%5.2lf\n", zzw.age, zzw.name, zzw.score);
	//(*p).
	strcpy((*p).name, "zhouzw"); 
	(*p).age = 24;
	(*p).score = 89.35;
	printf("2---%d���%s�ĳɼ���%5.2lf\n", (*p).age, (*p).name, (*p).score);
	//p->
	strcpy(p->name, "zhouzw"); 
	p->age = 24;
	p->score = 89.35;
	printf("3---%d���%s�ĳɼ���%5.2lf\n", p->age, p->name, p->score);
}
#endif
//7 struct�ṹ�壬¼����ѧ����Ϣ
#if 0
#include<stdio.h>
#include<string.h>
//����ṹ��
struct Stu { 
	char name[10];
	int age;
	double score;
};
//����
void Scanf(struct Stu* p) {
	printf("�����������������䡢����\n");
	scanf("%s %d %lf", p->name, &(p->age), &(p->score));
	//ע�⣡ʹ��scanfʱ�����ź���� ��ַ��ָ�룬"&"ȡ��ַ���Ų�Ҫ������
}
int main() {
	int i = 1; //��¼������
	struct Stu students[10]; //Ԥ��¼������  ����ֵ��˼���Ľ�������Ķ�̬�ڴ�
	struct Stu* p = students, * q = 0; 
	while(1) {
		Scanf(p);
		if (p->age < 0)
			break; //����ѭ��������¼��
		printf("��¼��%d��ѧ����Ϣ\n", i);
		p++; i++; //ָ�롢������1������¼��
	}
	q = p; //q���ڼ�¼���һ��ѧ����Ϣ��ָ��
	for (p = students; p < q; p++)   //����¼��Ĵ�ӡ����
		printf("%3d���%5s�ĳɼ���%5.2lf\n", p->age, p->name, p->score);
}
#endif

//
#if 1

#endif