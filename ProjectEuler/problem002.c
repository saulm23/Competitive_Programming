#include <stdio.h>

int main(void)
{
	long a = 1;
	long b = 2;
	long long c, sum; 
	c = sum = 2;
	while(c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		
		if (c % 2 == 0) sum = sum + c;
	}
	printf("%ld\n", sum);
	return 0;
}
/*
1 2 3 5 8 13 21 34 
1 2 3 4 5  6  7  8

*/
