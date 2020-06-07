#include <stdio.h>

//main，printf，return
#if 0
int main() {
	printf("Hello C and VS"); 
	return -1;
}
#endif

//循环 for也可以
//do-while循环，1到100求和
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
//while循环，1到100求和
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

//switch-case，计算器，不同运算符
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

//if，判断成绩是否及格
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

//array，数组
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
//输入score并汇总为数组scores
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

//定义函数，单个参数，define function 
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
//定义函数add两个数相加
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
//判断是否为质数，for、if、while
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
//输出100以内的所有质数
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

//for循环，阶乘计算
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
//递归，阶乘计算
#if 0 
int jiecheng(int x) {
	int y = 1;
	if ((x == 1) || (x == 0)) {
		return y;
	}	
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

//指针，交换两数，通过指针变量赋值，字符数组、整数数组
#if 1
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

	//通过指针变量赋值
	*d = 5;
	printf("%d, %d\n", a,b);
	b = *d;
	printf("%d, %d\n", a, b);

	printf("原来的：%c, %c\n", *p, crr[0]);
	crr[0] = 'H';
	printf("大写的：%c, %c\n", *p, crr[0]);
	for (; p < q; p++) {
		printf("%c",*p);
	}
	printf("\n");
}
#endif