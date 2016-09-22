#include<stdio.h>
int main()
{
	unsigned long long result = 1;
	unsigned long long j = 1;
	for (int i=1; i <= 64; i++)
	{
		j *= 2;
		result += j;
		j++;
	}
	printf("%llu\n", result);
	return 0;
}
