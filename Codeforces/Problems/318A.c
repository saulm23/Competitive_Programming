#include <math.h>
#include <stdbool.h>
#include <stdio.h>

long long ceiling(long long n);

int main()
{
	long long n, k, result;
	scanf("%lld %lld", &n, &k);
	if(k <= ceiling(n))
	{
		result = k + (k - 1);
	}
	else
	{
		result = k - (n - k + n % 2);
	}
	printf("%lld\n", result);
}

long long ceiling(long long n)
{
	if(n % 2 == 0) return n / 2;
	else return n / 2 + 1;
}
/*
n = 1 2 3 4 5 6 7 8 

sy  + + + + - - - -
so  0 1 2 3 3 2 1 0

re  1 3 5 7 2 4 6 8 
*/
