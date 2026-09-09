#include <math.h>
#include <stdio.h>

int main(void)
{
	int n = 100;
	long sum_1, sum_2;
	sum_1 = sum_2 = 0;
	for(int i = 1; i <= n; i++)
	{
		sum_1 = sum_1 + i;
		sum_2 = sum_2 +  pow(i, 2);
	}
	//printf("%ld\n", sum_2 - pow(sum_1, 2));
	int a, b;
	a = (n * (n + 1) * (2 * n + 1)) / 6;
	b = pow(n * (n + 1) / 2, 2);
	printf("%d\n%d\n%d", a, b, a - b);
	return 0;
}
