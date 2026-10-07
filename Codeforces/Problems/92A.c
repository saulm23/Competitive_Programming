#include <stdio.h>

int main()
{
	long long n, m;
	scanf("%lld %lld", &n, &m);
	m = m % (n * (n + 1) / 2);

	for(long long i = 1; i <= n; i++)
	{
		if((m - i) < 0) 
		{
			printf("%lld\n", m);
			break;
		}
		m = m - i;
	}
	//1 2 3 4 5
	//1 3 6 10 15
	//10 - 1 - 2 - 3 - 4 - 5 - 6
//n = ======================================
/*

=      -
==     --
===    ---
====   ----
=====  -----
====== --
print residuo

*/
//m = ---------------------------------
	
	
}

