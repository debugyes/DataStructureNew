#include<stdio.h>
int main(void)
{
	double* p;
	double x = 66.6;

	p = &x;//x占8个字节，1个字节是8位，1个字节1个地址

	double arr[3] = { 1.1, 2.2, 3.3 };
	double* q;
	
	q = &arr[0];
	printf("%p\n", q); //%p实际就是以16进制输出
	q = &arr[1];
	printf("%p\n", q);
	//iii.	无论指针变量指向的是哪种类型的变量，都只占4个字节




	return 0;
}