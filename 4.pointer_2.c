#include<stdio.h>
void f(int* p) //���Ƕ�����һ�����ֽ���*p���βΣ����Ƕ�����һ���βΣ����β����ֽ���p������������int* 
{
	*p = 100; //*p��ͬ��i
}
int main(void)
{
	int i = 9;

	f(&i);
	printf("i = %d\n", i);

	return 0;
}