#include<stdio.h>
int isPerfect(int x)
{
	int flag = 1, s = 0, i;
	for (i = 1; i<x; i++)
	{
		if (i%x == 0)
			s = s + i;
	}
	if (s == x)
		flag = 1;
	else
		flag = 0;
	return flag;
}
int main()
{
	int x, n;
	scanf("%d", &x);
	n = isPerfect(x);
	if (n == 1)
		puts("����Ȼ����������");
	else
		puts("����Ȼ������������");
	return 0;
}