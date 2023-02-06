#include <stdio.h>
#include <string.h>
/*int main() {
	int num1, num2, sum;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);

	return 0;
}*/
//常量：1.字面常量，2.const修饰的常变量，3.#define定义的标识符，4.枚举常量。

/*2.int main() {
	//const int num = 4; //此时num常变量不能改

	int num = 5; //此时num为变量
	//3//字面
	printf("%d\n", num);
	num = 9;
	printf("%d\n", num);
	return 0;
}*/

/*int n =10;
int arr[n]={0};//此时n为变量不能运行
//修改为const int n=10;
return 0;
}*/
/*3.#define MAX 10
int main() {
	int arr[MAX] = {0};
	printf("%d", MAX);
	return 0;
}*/
/*4.enum Sex {
	MALE,//0
	FEMALE,//1
	SECRET//2
};//MALE..枚举常量是有值的且不能改
int main() {
	enum Sex s = FEMALE;
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	printf("%d\n", s);//1
}*/
//字符串
/*"hello world.\n"//由双引号引起来的一串字符为字符串，“”为空字符
//注：字符串的结束标志是一个\0的转义字符，计算字符串长度时不算作字符串内容。*/
/*int main() {
	char arr1[] = "abc";//='a','b','c','\0'.---'0'为结束标志字符
	char arr2[] = {'a', 'b', 'c'};
	printf("%s\n", arr1);//%s为打印字符串abc
	printf("%s\n", arr2);//abcabc//修改arr2[]={'a','b','c','0'}
	printf("%d\n", strlen(arr1)); //strlen计算字符串长度
	printf("%d\n", strlen(arr2));
	return 0;
}*/
//转义字符：转变原来的意思
/*int main() {
	printf("abc\n");//\n:换行
	printf("c:\test\32\test.c\n");//\t:水平制表符
	printf("c:\\test\\32\\test.c\n");
	printf("%c\n", 'a');
	printf("%c\n", '\'a');
	printf("%s\n", "abc");
	printf("%d\n", strlen("c:\test\32\test.c"));
	return 0;
}*/
//选择语句
/*int main() {
	int input;
	printf("你要好好学习吗（1/0）:");
	scanf("%d", &input); //1/0
	if (input == 1)
		printf("好offer\n");
	else
		printf("不好工作");
	return 0;
}*/
//循环语句:while for do...while
/*int main() {
	int a = 0;
	while (a < 20000) {
		printf("敲代码:%d\n", a);
		a++;
	}
	printf("很好");

	return 0;
}*/
//函数
int Add(int x, int y) { //自定义函数；
	int z = x + y;
	return z;
}

int main() {
	int num1 = 20;
	int num2 = 30;
	int sum;
	int a = 100;
	int b = 200;
	sum = Add(num1, num2);
	sum = Add(a, b);
	printf("%d", sum);
	return 0;
}
//数组:一组相同类型的集合
//计算数组元素个数=数组总大小/每个元素大小
//sz=sizeof(arr)/sizeof(arr[0]);
/*int main() {
//	int a=1;
//	int b=2;
//	int c=3;
//	int d=4;
	int arr[10] = {1, 2, 3, 4, 5};
	//语法：arr[0]=1,arr[1]=2.....
	//char ch[20];
	//float arr2[5];
	int i = 0;
	while (i < 10) {
		printf("%d", arr[i]);
		i++;
	}
	//printf("%d\n", arr[4]);
	return 0;
}*/
//操作符
//算数+，—，*，%，/(取余)
//移位（二进制）<<左移,>>右移；
//位操作：&按位与，|按位或，！非
/*int main() {
	int a = 1;
	int b = a << 1;
	printf("%d\n", b);//10=2
	int c = a << 2;
	printf("%d\n", b); //100=4
	return 0;
}*/

