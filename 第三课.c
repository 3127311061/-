#include <stdio.h>

/*int max(x, y) {
	if (x > y)
		return x;
	else
		return y;
}*/

//int main() {

//int num1 = 10;
//int num2 = 30;
//int maX;
/*if (num1 > num2)
	printf("%d", num1);
else
	printf("%d", num2);*/
//maX = max(num1, num2);
//printf("%d", maX);

//return 0;
//}
/*int main(){
	int a=10;
	int arr[]={1,2,3,4,5,6};
	printf("%d\n",sizeof(a));//4
	printf("%d\n",sizeof(int));//4
	printf("%d\n",sizeof a);//4//1与3等价说明sizeof是操作符
	//printf("%d\n",sizeof int);//err
	printf("%d",sizeof(arr));//24,计算数组大小，单位是字节
	printf("%d",sizeof(arr)/sizeof(arr[0]));//6,元素个数
	return 0;
}*/
/*int main()
{
	//负.正整数在内存中储存的时候，储存的是二进制的补码，打印的是这个数的原码；
	int a=10;
	//int b=a++;//后置++，先使用，再++
	//printf("a=%d b=%d",a,b);//a=11,b=10;
	int b=++a;////先++，再使用
	printf("a=%d b=%d",a,b);//a=11,b=11;
	return 0;
}*/
/*int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
int main()
{
	int arr[10]={0};//[]下标引用操作符
	arr[4];
	int a=10;
	int b=20;
	int sum=add(a,b);//（）函数调用操作符
	return 0;

}*/
//关键字：register 寄存器关键字，typedef 类型定义（重定义）
//int main() {
//int a= 10;//局部变量(自动创建，自动消亡)
/*typedef unsigned int u int;
unsigned int num=20;
u int num2=20;*///类型一模一样
//static 修饰变量和函数
//	return 0;
//}
/*void test()
{
	int a=1;//a创建
	a++;//2
	printf("a=%d/n",a);//a销毁
}
int main()
{
	int i=0;
	while (i<5)
	{
		test();
		i++;
	}
	return 0;
a=2
a=2
a=2
a=2
a=2
}*/

//1,static修饰局部变量，其生命周期变长。
//2,static修饰全局变量,改变了变量的作用域-让静态的局部变量只能在自己所在的源文件内部使用
//出了源文件就没法再使用了
//3.static修饰函数，也是改变了函数的作用域-不准确
//static修饰函数改变了函数的连接属性
//外部链接属性->内部链接属性
/*//1
void test()
{
	static int a=1;//a是一个静态的局部变量(不会销毁)
	a++;//2
	printf("a=%d/n",a);
}

int main()
{
	int i=0;
	while (i<5)
	{
		test();
		i++;
	}
	return 0;
	a=2
	a=3
	a=4
	a=5
	a=6
}*/

//#define 宏定义：定义常量和宏
/*#define MAX 100//定义标识符常量
int main() {
	int a=MAX;
	return 0;
}*/
//define 定义宏，带参数
//函数实现
/*Max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
//宏的方式
#define MAX(X,Y) (X>Y?X:Y)

int main() {
	int a = 10;
	int b = 20;
	//函数
	int max = Max(a, b);
	printf("max=%d\n", max);
	//宏的方式
	max = MAX(a, b);
	printf("max=%d\n", max);
	return 0;
}*/

//指针
//计算机的运行都在内存上运行。
/*int main() {
	int a = 10;
	int *p = &a; //取地址
	//p变量用来存放地址的指针变量
	*p = 20;
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("a=%d\n", a);
	char ch = 'w';
	char *pc = &ch;
	*pc = 'a';
	printf("%c\n", ch);
	return 0;
}*/
























