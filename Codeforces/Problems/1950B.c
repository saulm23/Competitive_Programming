#include <stdio.h>

int row(int n, int parity);
int main()
{
	int t, n;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &n);	
		int out_state = 1;
		for(int j = 1; j <= 2 * n; j++)
		{
			// 1 2 3 4 5 6
			// # # . . # #
			if(out_state == 1)
			{
				row(2 * n, 1);
				if(j % 2 == 0) out_state = 0;
			}
			else
			{
				row(2 * n, 0);
				if(j % 2 == 0) out_state = 1;
			}
		}
	}
}

int row(int n, int parity)
{
	char c1, c2;
	if(parity == 1)
	{
		c1 = '#';
		c2 = '.';
	}
	else
	{
		c1 = '.';
		c2 = '#';
	}
	int state = 1;
	for(int i = 1; i <= n; i++)
	{

		if(state  == 1)
		{
			printf("%c", c1);
			if(i % 2 == 0) state = 0;
		}
		else
		{
			printf("%c", c2);
			if(i % 2 == 0) state = 1;
		}
	}	
	printf("\n");
}
