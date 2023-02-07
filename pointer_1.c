#include<stdio.h>
int main(void)
{
	int* p; //p是个指针变量，int* 表示该p变量只能存储int类型变量的地址
	int i = 10;
	int j;

	p = &i;
	//p = 10; error
	j = *p; //等价于j = i
	printf("i = %d, j = %d, *p = %d\n", i, j, *p);
	return 0;
}