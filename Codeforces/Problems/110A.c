#include <stdio.h>

int main()
{
	long long n;

	scanf("%lld", &n);
	long count, digit;
	count = 0;	
	while(n > 0)
	{
		digit = n % 10;
		if(digit == 4 || digit == 7) count++;
		n = n / 10;
	}
	if(count == 4 || count == 7) printf("YES\n");
	else printf("NO\n");
}
