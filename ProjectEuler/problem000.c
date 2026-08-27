#include <stdio.h>

int main(void)
{
	long long sum = 0;
	for (long i = 1; i <= 251000; i = i + 2)
	{
		sum = sum + i * i;	
	}	
	printf("%lld\n", sum);
	return 0;
}
