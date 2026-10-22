#include <math.h>
#include <stdio.h>

long long solve(long long a, long long b);
long long absolute(long long n);

int main()
{
	long t;
	scanf("%ld", &t);
	long long a, b;
	for(long i = 0; i < t; i++)
	{
		scanf("%lld %lld", &a, &b);
		printf("%lld\n",solve(a,b));
		
	}
}

long long solve(long long a, long long b)
{
	long long ans;
	ans = absolute(a - b);
	if(ans % 10 != 0) ans = ans / 10 + 1;
	else ans = ans / 10;
	return ans;

}

long long absolute(long long n)
{
	if(n < 0) return n * -1;
	else return n;
}

