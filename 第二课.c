#include <stdio.h>
#include <string.h>
/*int main() {
	int num1, num2, sum;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);

	return 0;
}*/
//������1.���泣����2.const���εĳ�������3.#define����ı�ʶ����4.ö�ٳ�����

/*2.int main() {
	//const int num = 4; //��ʱnum���������ܸ�

	int num = 5; //��ʱnumΪ����
	//3//����
	printf("%d\n", num);
	num = 9;
	printf("%d\n", num);
	return 0;
}*/

/*int n =10;
int arr[n]={0};//��ʱnΪ������������
//�޸�Ϊconst int n=10;
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
};//MALE..ö�ٳ�������ֵ���Ҳ��ܸ�
int main() {
	enum Sex s = FEMALE;
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	printf("%d\n", s);//1
}*/
//�ַ���
/*"hello world.\n"//��˫������������һ���ַ�Ϊ�ַ���������Ϊ���ַ�
//ע���ַ����Ľ�����־��һ��\0��ת���ַ��������ַ�������ʱ�������ַ������ݡ�*/
/*int main() {
	char arr1[] = "abc";//='a','b','c','\0'.---'0'Ϊ������־�ַ�
	char arr2[] = {'a', 'b', 'c'};
	printf("%s\n", arr1);//%sΪ��ӡ�ַ���abc
	printf("%s\n", arr2);//abcabc//�޸�arr2[]={'a','b','c','0'}
	printf("%d\n", strlen(arr1)); //strlen�����ַ�������
	printf("%d\n", strlen(arr2));
	return 0;
}*/
//ת���ַ���ת��ԭ������˼
/*int main() {
	printf("abc\n");//\n:����
	printf("c:\test\32\test.c\n");//\t:ˮƽ�Ʊ��
	printf("c:\\test\\32\\test.c\n");
	printf("%c\n", 'a');
	printf("%c\n", '\'a');
	printf("%s\n", "abc");
	printf("%d\n", strlen("c:\test\32\test.c"));
	return 0;
}*/
//ѡ�����
/*int main() {
	int input;
	printf("��Ҫ�ú�ѧϰ��1/0��:");
	scanf("%d", &input); //1/0
	if (input == 1)
		printf("��offer\n");
	else
		printf("���ù���");
	return 0;
}*/
//ѭ�����:while for do...while
/*int main() {
	int a = 0;
	while (a < 20000) {
		printf("�ô���:%d\n", a);
		a++;
	}
	printf("�ܺ�");

	return 0;
}*/
//����
int Add(int x, int y) { //�Զ��庯����
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
//����:һ����ͬ���͵ļ���
//��������Ԫ�ظ���=�����ܴ�С/ÿ��Ԫ�ش�С
//sz=sizeof(arr)/sizeof(arr[0]);
/*int main() {
//	int a=1;
//	int b=2;
//	int c=3;
//	int d=4;
	int arr[10] = {1, 2, 3, 4, 5};
	//�﷨��arr[0]=1,arr[1]=2.....
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
//������
//����+������*��%��/(ȡ��)
//��λ�������ƣ�<<����,>>���ƣ�
//λ������&��λ�룬|��λ�򣬣���
/*int main() {
	int a = 1;
	int b = a << 1;
	printf("%d\n", b);//10=2
	int c = a << 2;
	printf("%d\n", b); //100=4
	return 0;
}*/

