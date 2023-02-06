#include <stdio.h>//头文件
//int整型
//main函数前的int表示main函数调用返回一个整型值
/*int main() //主函数-程序入口-main函数有且只有一个
{
	printf("hello world\n");//print-function:打印功能
	//printf库函数：C语言提供使用

	return 0;//返回0
}*/
//数据类型{int整型,char字符型'A',float单精度,short短整型，long长整型，double双精度
//%p打印地址%x打印16进制
/*int main() {
	char ch = 'a';
	printf("%c\n", ch); //%c打印字符格式数据
	int age = 20;
	printf("%d\n", age); //%d打印整型十进制数据
	short num = 10;
	long sum = 100;
	printf("%d\n%d\n", num, sum);
	float f = 5.0;
	double e = 3.14;
	printf("%f\n%lf", f, e);
	return 0;
}*/
//不同类型字节大小
//单位：bit-比特（计算机最小单位），byte-字节：1字节=8比特
//1kb=1024byte,1mb=1024kb;
/*int main() {
	printf("%d\n", sizeof(char));//所占字节数1
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(short));//2，可以放2的16次方个二进制序列
	printf("%d\n", sizeof(long long)); //8
	return 0;
}*/
/*int num2=20;//全局变量
int main()
{
	//int age=150;//定义变量age
	int num1=10;//局部变量：在{}内部
	//变量名相同:局部>全局
	//建议不相同容易产生bug
	return 0;
}*/
//变量使用
/*int main() {
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//输入函数
	scanf("%d%d", &num1, &num2); //&取地址
	sum = num1 + num2;
	printf("sum=%d", sum);
	return 0;
}*/
