#include <stdio.h>

int sum(int n);

int main()
{
	int t, a;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &a);
		printf("%d\n", sum(a));	
	}
}

int sum(int n)
{
	int sum = 0;
	while(n != 0)
	{	
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}
