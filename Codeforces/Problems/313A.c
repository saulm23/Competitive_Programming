#include<stdbool.h>
#include<stdio.h>
#include<math.h>

bool is_pos(long long n);

int main()
{
	long long n, a, b;
	scanf("%lld", &n);
	a = (n / 100) * 10 + (n % 10);
	b = n  / 10;
		
	if(is_pos(n)) printf("%lld\n", n);
	else
	{
		if(a >= b) printf("%lld\n", a);
		else printf("%lld\n", b);
	}		
}

bool is_pos(long long n)
{
	//n -> 1 if n is pos
	//n -> -1 if n is neg
	//n = n / (abs);
	long abs = sqrt(n * n);
	n = n / abs;		
	if(n == 1) return true;
	else return false;
}
/*
1/2 * a + 1/2 = 1 if a = 1
1/2 * a + 1/2 = 0 if a = -1

 a *  n + b = 1 =>  an = 1 - b
 a * -n + b = 0 => -an = -b
0 = 1 - 2b => b = 1/2

a * n + 1/2 = 1
a *-n + 1/2 = 0

ax + b = 1
-ax + b = -1

abs = sqrt(n * n)


delete second last digit
n = (n / 100) * 10 + (n % 10)

delete last digit
n = n  / 10;
*/
