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
	int width = 0;
	int digit = n % 10;
	while(n != 0)
	{
		n = n / 10;
		width++;
	}	
	int ans;
	ans = 10 * (digit - 1) + (width * (width + 1)) / 2;
	return ans;
}

/*
10 * (digit - 1) + (width * width + 1) / 2
input = 22
4 * (digit - 1) + width
1 2 3 4 = 4 + 3 + 2 + 1 = 10 = digit * (n * n + 1) / 2
5 6 7 8
9 10 11 12
13 14 15 16
17 18 
*/
