#include<stdio.h>

long diagonal(long n);

int main()
{
	long t, ans, x, y, diagonal;
	scanf("%ld", &t);		
	for(long i = 1; i <= t; ++i)
	{
		scanf("%ld %ld", &y, &x);
		if(x > y)
		{
			diagonal = x * x - x + 1;	
			ans = diagonal + (2 * (x % 2) - 1) * (x - y);
		}
		else if(y > x)
		{
			diagonal = y * y - y + 1;	
			ans = diagonal + (-2 * (y % 2) + 1) * (y - x);
		}
		else ans = x * x - x + 1;
		
		printf("%ld\n", ans);
	}

}
/*
0 -> -1
1 -> +1
0 -> 1
1 -> -1

0 * x + y = +1 => y = 1
1 * x + y = -1 => x = -2
+
- (n - y)
if x is even 
then go -- 
if x is odd
then go ++

*/
