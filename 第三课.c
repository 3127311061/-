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
	printf("%d\n",sizeof a);//4//1��3�ȼ�˵��sizeof�ǲ�����
	//printf("%d\n",sizeof int);//err
	printf("%d",sizeof(arr));//24,���������С����λ���ֽ�
	printf("%d",sizeof(arr)/sizeof(arr[0]));//6,Ԫ�ظ���
	return 0;
}*/
/*int main()
{
	//��.���������ڴ��д����ʱ�򣬴�����Ƕ����ƵĲ��룬��ӡ�����������ԭ�룻
	int a=10;
	//int b=a++;//����++����ʹ�ã���++
	//printf("a=%d b=%d",a,b);//a=11,b=10;
	int b=++a;////��++����ʹ��
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
	int arr[10]={0};//[]�±����ò�����
	arr[4];
	int a=10;
	int b=20;
	int sum=add(a,b);//�����������ò�����
	return 0;

}*/
//�ؼ��֣�register �Ĵ����ؼ��֣�typedef ���Ͷ��壨�ض��壩
//int main() {
//int a= 10;//�ֲ�����(�Զ��������Զ�����)
/*typedef unsigned int u int;
unsigned int num=20;
u int num2=20;*///����һģһ��
//static ���α����ͺ���
//	return 0;
//}
/*void test()
{
	int a=1;//a����
	a++;//2
	printf("a=%d/n",a);//a����
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

//1,static���ξֲ����������������ڱ䳤��
//2,static����ȫ�ֱ���,�ı��˱�����������-�þ�̬�ľֲ�����ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û����ʹ����
//3.static���κ�����Ҳ�Ǹı��˺�����������-��׼ȷ
//static���κ����ı��˺�������������
//�ⲿ��������->�ڲ���������
/*//1
void test()
{
	static int a=1;//a��һ����̬�ľֲ�����(��������)
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

//#define �궨�壺���峣���ͺ�
/*#define MAX 100//�����ʶ������
int main() {
	int a=MAX;
	return 0;
}*/
//define ����꣬������
//����ʵ��
/*Max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
//��ķ�ʽ
#define MAX(X,Y) (X>Y?X:Y)

int main() {
	int a = 10;
	int b = 20;
	//����
	int max = Max(a, b);
	printf("max=%d\n", max);
	//��ķ�ʽ
	max = MAX(a, b);
	printf("max=%d\n", max);
	return 0;
}*/

//ָ��
//����������ж����ڴ������С�
/*int main() {
	int a = 10;
	int *p = &a; //ȡ��ַ
	//p����������ŵ�ַ��ָ�����
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
























