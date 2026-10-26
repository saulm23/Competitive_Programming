#include <stdio.h>

int solve(int k);

int main()
{
	int t,k;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &k);
		printf("%d\n", solve(k));
	}
}
	

int solve(int k)
{
	int i;
	for(i = 1; i <= k; i++)
	{
		if(i % 3 == 0 || i % 10 == 3) k ++;
	}
	return i - 1;
}
/*
1 2 3 4 5 6 7  8  9  10 11 12
0 0 1 1 2 2 3  3  5  6   6  
1 2 4 5 7 8 10 11 14 16 17 
( = \ % < ; ) { < # ? , ++ tab esc : nums  
i ans
1 1  
2 2
3 4
4 5
5 7 
6 8
7 10
8 11
9 13
10 14
*/
