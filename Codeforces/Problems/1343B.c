/*
 * key note 
 * if n / 2 is even Y
 * else N
 * prove it
 * - half1 is even
 * - half2 is odd
 * - all numbers are distinct
 * - sum(half1) == sum(half2)
 *  now generate the array
 *  half1 = 2 4 6 8
 *
 */

#include <stdio.h>

int main(void)
{
	int t,n;
	scanf("%d ", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		if((n / 2) % 2 == 1)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
			for(int j = 0; j < n; j++)
			{
				if(j < n / 2)
				{
					printf("%d ", (j + 1) * 2);

				}
				else
				{
					if(j == n - 1) printf("%d\n", n - 1 + n / 2);
					//sum of the n odd numbers 1 + 3 + 4 + 5
					//1 + 3 + 5 + 7 + 9 + 11
					//n 
						
					//(n + 1) 
					
					else printf("%d ", (j - n / 2) * 2 + 1);
				}
			}
		}
	}
	
}
