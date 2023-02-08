#include<stdio.h>

void Show_Array(int* p, int len)
{
	p[0] = -1;//p[0] == *p
	p[2] = -1;//p[2] == *(p+2) == *(a+2) == a[2]
	//p[i]就是主函数的a[i]

	for (int i = 0; i < len; i++)
	{
		printf("%d ", p[i]);
	}
	printf("---------------------------------\n");
}

int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	
	Show_Array(a, 5); //a等价于&a[0], &a[0]本身就是int*类型
								//a发送给p，5发送给len
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
	return 0;
}