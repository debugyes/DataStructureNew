#include<stdio.h>
int main(void)
{
	double* p;
	double x = 66.6;

	p = &x;//xռ8���ֽڣ�1���ֽ���8λ��1���ֽ�1����ַ

	double arr[3] = { 1.1, 2.2, 3.3 };
	double* q;
	
	q = &arr[0];
	printf("%p\n", q); //%pʵ�ʾ�����16�������
	q = &arr[1];
	printf("%p\n", q);
	//iii.	����ָ�����ָ������������͵ı�������ֻռ4���ֽ�




	return 0;
}