#include <stdio.h>//ͷ�ļ�
//int����
//main����ǰ��int��ʾmain�������÷���һ������ֵ
/*int main() //������-�������-main��������ֻ��һ��
{
	printf("hello world\n");//print-function:��ӡ����
	//printf�⺯����C�����ṩʹ��

	return 0;//����0
}*/
//��������{int����,char�ַ���'A',float������,short�����ͣ�long�����ͣ�double˫����
//%p��ӡ��ַ%x��ӡ16����
/*int main() {
	char ch = 'a';
	printf("%c\n", ch); //%c��ӡ�ַ���ʽ����
	int age = 20;
	printf("%d\n", age); //%d��ӡ����ʮ��������
	short num = 10;
	long sum = 100;
	printf("%d\n%d\n", num, sum);
	float f = 5.0;
	double e = 3.14;
	printf("%f\n%lf", f, e);
	return 0;
}*/
//��ͬ�����ֽڴ�С
//��λ��bit-���أ��������С��λ����byte-�ֽڣ�1�ֽ�=8����
//1kb=1024byte,1mb=1024kb;
/*int main() {
	printf("%d\n", sizeof(char));//��ռ�ֽ���1
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(short));//2�����Է�2��16�η�������������
	printf("%d\n", sizeof(long long)); //8
	return 0;
}*/
/*int num2=20;//ȫ�ֱ���
int main()
{
	//int age=150;//�������age
	int num1=10;//�ֲ���������{}�ڲ�
	//��������ͬ:�ֲ�>ȫ��
	//���鲻��ͬ���ײ���bug
	return 0;
}*/
//����ʹ��
/*int main() {
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//���뺯��
	scanf("%d%d", &num1, &num2); //&ȡ��ַ
	sum = num1 + num2;
	printf("sum=%d", sum);
	return 0;
}*/
