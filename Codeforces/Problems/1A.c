#include <stdio.h> 

int main()
{
	long n, m, a;
	scanf("%ld %ld %ld", &n, &m, &a);
	long long p, q;
	p = n / a;
	q = m / a;
	if(n % a != 0) p++;
	if(m % a != 0) q++;
	printf("%lld\n", p * q);
	
}
/*


*/

