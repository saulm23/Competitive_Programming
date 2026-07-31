#include<bits/stdc++.h>

long diagonal(long n);

int main()
{
	long t, ans, x, y;
	scanf("%ld", &t);		
	for(long i = 1; i <= t; ++i)
	{
		scanf("%ld %ld", &y, &x);
		if(x > y) 
		{
			ans = diagonal(x) + (-2 * (x % 2) + 1) ;
		}
		else if(y > x)
		{
			ans = diagonal(y) + (-2 * (y % 2) + 1) * x - 1;
		}
		else ans = diagonal(x);
		printf("%ld\n", ans);
	}

}
long diagonal(long n)
{
	long ans = 1;
	for(long i = 0; i < n; ++i)
	{
		ans = ans + 2 * i;
	}
	return ans;
}
