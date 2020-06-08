//Created by zhouzw
//Learn C in Visual Studio by watching hw-dong's videos in Bilibili 
//https://www.bilibili.com/video/BV1Wt41127xf
//Thanks a lot.

#include <stdio.h>
//main，printf，return
#if 0
int main() {
	printf("Hello C and VS"); 
	return -1;
}
#endif

//3 控制语句-条件 if，判断成绩是否及格
#if 0
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
//3 控制语句-条件 switch-case，计算器，不同运算符
#if 0
int main() {
	int a, b;
	char op;
	scanf("%d %c %d", &a, &op, &b);
	switch (op) {
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
//3 控制语句-循环 do-while、while、for，1到100求和
#if 0
void main() {
	int i = 1, sum = 0, n = 3;
	do {
		sum += i;
		++i;
		printf("i = %3d, sum = %3d\n", i, sum);
	} while (i <= n);
	printf("1到%d的和: %d\n", n, sum);

	i = 1, sum = 0, n = 10;
	while (i <= n) {
		sum += i;
		++i;
		printf("i = %3d, sum = %3d\n", i, sum);
	}
	printf("1到%d的和: %d\n", n, sum);

	i = 1, sum = 0, n = 100;
	for (i = 1; i <= n; i++) {
		sum += i;
		printf("i = %3d, sum = %3d\n", i, sum);
	}
	printf("1到%d的和: %d\n", n, sum);
}
#endif

//4 array，数组
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
	//数组定义时默认分配20个
	//for (int i = 0; i < sizeof(a2); i++) {
		//索引“19”超出了“0”至“4”的有效范围(对于可能在堆栈中分配的缓冲区“a2”)。
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a2[i]);
	}
	printf("\n");

	//array[n]= for定义
	int a3[5];
	for (int i = 0; i < 5; i++) {
		a3[i] = 2 * i + 5;
		printf("%d\t", a3[i]);
	}
	printf("\n");
}
#endif 
//4 输入score并汇总为数组scores
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

//5 定义函数，单个参数，define function 
#if 0
//返回值，函数名，形参
void f(int n) {  //void 空的，无效的
	for (int i = 0; i < n; i++) {
		printf("%d zhouzw\n",i);
		//return 0  //这样会直接从main函数跳出
	}
}
int main() {
	//调用函数，实参，参数传递
	f(3);
	return 1;
}
#endif
//5 定义函数add两个数相加
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
//5 判断是否为质数，for、if、while
#if 0
void zhishu(int x) {
	int flag = 0;
	for (int i = 2; i < x; i++) { //i：2到x-1
		//如果x能被1和其本身以外的数整除，则x不是质数
		if (x % i == 0) {
			printf("%d\t", i);
			flag = 1;
		}		
	}
	if (flag == 0) {
		printf("%d是质数\n", x);
	}
	else if(flag == 1) {
		printf("\n%d不是质数\n", x);
	}
}

int main() {
	int num = 0;
	while (1) {
		scanf("%d", &num); 
		//程序运行时只允许准确地输入整数
		//如果多输入了其他字符，程序会循环执行
		if (num > 0) {
			zhishu(num);
		}
		else break;
	}
}
#endif
//5 输出100以内的所有质数
#if 0
int zhishu(int x) {
	int flag = 0;
	for (int i = 2; i < x/2; i++) { //i：2到x-1
		//如果x能被1和其本身以外的数整除，则x不是质数
		if (x % i == 0) {
			flag = 1;
			break;
		}
	}
	return flag;
}
int main() {
	for (int i = 1; i < 100; i++) {
		if (!zhishu(i)) { printf("%d是质数\n", i); }
	}
}
#endif
//5 for循环，阶乘计算
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
//5 递归，阶乘计算
#if 0 
//递归("套娃") 
//1.基情形。任务不能再分解。最小的"套娃"  
//2.分解情形。把规模大的转化为规模小的，拆套娃。通过循环把大的一层一层的嵌套上去。
int jiecheng(int x) {
	//最小套娃
	int y = 1;
	if ((x == 1) || (x == 0)) {
		return y;
	}
	//套自己，闹太套，就硬套
	else if (x > 1) {
		y = x * jiecheng(x - 1);
		return y;
	}
	else {
		printf("请输入正整数\n");
	}
}
int main() {
	int x;
	scanf("%d", &x);
	printf("%d", jiecheng(x));
}
#endif

//6 指针，交换两数，通过指针变量赋值，字符数组、整数数组
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
	//交换两数
	printf("原来的：%d, %d\n", a, b);
	swap(&a, &b);
	printf("交换后：%d, %d\n", a, b);

	printf("%d, %d\n", a, *d);
	//打印地址
	printf("%p, %p\n", &a, d);
	//通过指针变量赋值
	*d = 5;
	printf("%d, %d, %d\n", a, *d, b);
	b = *d + 2;
	printf("%d, %d, %d\n", a, *d, b);

	printf("原来的：%c, %c\n", *p, crr[0]);
	crr[0] = 'H';
	printf("大写的：%c, %c\n", *p, crr[0]);
	for (; p < q; p++) {
		printf("%c",*p);
	}
	printf("\n");
}
#endif
//6 指针，通过指针变量 访问整数数组 并逐个打印， *(p+2)相当于p[2]；
#if 0
int main() {
	int arr[5] = { 0,1,2,3,4 };
	int* p = arr; // 注意！！int* p = &arr[0]
	printf("%p, %p, %p\n", p, arr, &arr[0]);

	printf("%d, %d\n", p[0], arr[0]);
	printf("%d, %d\n", *p, *arr);

	//注意！！*(p+2)相当于p[2]
	printf("%d, %d\n", *p + 2, arr[2]);
	printf("%d, %d\n", p[2], *arr+2);
	int b = p[3];
	printf("%d, %d\n", b, arr[3]);

	//while、for循环，逐个打印数组元素
	while (p < &arr[5]) {
		printf("%d  ", *p);
		p++;
	}
	printf("\n");
	for (p = arr; p < &arr[5]; p++) { 
	//这里p需要重新初始化
		printf("%d  ", *p);
	}
	printf("\n");
	p -= 2; //for循环完后 p=&arr[5]
	printf("%d\n", *p); //输出3
}
#endif
//6 自定义Print函数，再玩一玩指针p
#if 0
#include <stdlib.h>
//定义 逐个打印字符数组 的函数
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
	*p = 'H'; //即 ch = 'H';
	crr[0] = ch;
	Print(crr, 5);

	p = crr; // p = &crr[0]；
	*(p + 2) = 'L'; //并未改变p！！
	Print(crr, 5);

	p++; //此时 p = &crr[1]；
	*p = 'E';
	Print(crr, 5);
}
#endif
//6 通过指针 将字符数组hello 改成ABCDE
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
//6 字符串，结束字符'\0'; C语言中 字符用单引号，字符串用双引号；自定义Strcpy函数；
#if 0
#include <string.h> //<string.h>字符串处理函数的头文件;
void Print(char crr[], int n) {
	//crr[]:字符数组、字符串的指针,注意是指针！相当于 char* crr； 
	//n:希望显示的字符个数
	for (char* p = crr; p < &crr[n]; p++) {
		printf("%c  ", *p);
	}
	printf("\n");
}
//尝试自定义strcpy，指针移动，逐个赋值，实现复制
void Strcpy(char* crr, char* s) {
	//功能：将*s复制给*crr
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
	Print(arr, 5); //使用自定义Print函数
	Print(str, 5); //同样可以使用
	Print(p, 5);
	printf("%s\n", arr); //出现乱码
	printf("%s\n", str); //'\0'起了作用
	printf("%s\n", p); //显然对应的 char* p = "hello"; 这种定义方式最简便；

	strcpy(str, "WORLD"); printf("%s\n", str);
	//strcpy(arr, "WORLD"); printf("%s\n", arr);  //报错
	arr[4] = '\0'; //将最后一个字符修改为'\0'后，使用strcpy不报错
	strcpy(arr + 2, "LL"); printf("%s\n", arr);

	Strcpy(str, &"yes"[0]); //Strcpy(str, "yes"); 
	printf("%s\n", str);
}
#endif

//7 struct结构体，学生信息；
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
	strcpy(zzw.name, "zhouzw"); //注意！！name是指针,要使用strcpy
	zzw.age = 24;
	zzw.score = 89.35;
	printf("1---%d岁的%s的成绩是%5.2lf\n", zzw.age, zzw.name, zzw.score);
	//(*p).
	strcpy((*p).name, "zhouzw"); 
	(*p).age = 24;
	(*p).score = 89.35;
	printf("2---%d岁的%s的成绩是%5.2lf\n", (*p).age, (*p).name, (*p).score);
	//p->
	strcpy(p->name, "zhouzw"); 
	p->age = 24;
	p->score = 89.35;
	printf("3---%d岁的%s的成绩是%5.2lf\n", p->age, p->name, p->score);
}
#endif
//7 struct结构体，录入多个学生信息
#if 0
#include<stdio.h>
#include<string.h>
//定义结构体
struct Stu { 
	char name[10];
	int age;
	double score;
};
//输入
void Scanf(struct Stu* p) {
	printf("依次输入姓名、年龄、分数\n");
	scanf("%s %d %lf", p->name, &(p->age), &(p->score));
	//注意！使用scanf时，逗号后面跟 地址或指针，"&"取地址符号不要忘！！
}
int main() {
	int i = 1; //已录入人数
	struct Stu students[10]; //预计录入人数  这里值得思考改进！后面的动态内存
	struct Stu* p = students, * q = 0; 
	while(1) {
		Scanf(p);
		if (p->age < 0)
			break; //跳出循环，结束录入
		printf("已录入%d个学生信息\n", i);
		p++; i++; //指针、人数加1，继续录入
	}
	q = p; //q用于记录最后一个学生信息的指针
	for (p = students; p < q; p++)   //把已录入的打印出来
		printf("%3d岁的%5s的成绩是%5.2lf\n", p->age, p->name, p->score);
}
#endif

//
#if 1

#endif