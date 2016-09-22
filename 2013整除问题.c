#include<stdio.h>
int main()
{
	int i, temp;
	i = temp = 1;
	while (temp != 0) {
		temp = temp * 10 + 1;
		temp = temp % 2013;
		i = i + 1;
	}
	printf("%d\n", i);
	return 0;
}