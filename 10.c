#include<stdio.h>
int main()
{
	long int i, p, sum=0;
	for (i = 1; i <= 20; i++)
	{
		for (p = 1; i != 0; i--)
		{
			p = p * i;
		}
		sum = sum + p;
	}
	printf("%ld", sum);
}