#include <stdio.h>

int int_length(int n);

int main(void)
{
	int t, x, min, d;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &x);	
		//1 <= x <= 1000	
		//find smallest digit
		min = 10;
		for(int j = 0, l = int_length(x); j < l; j++)
		{
			d = x % 10;	
			x = x / 10;
			if(d <= min) min = d;
		}
		printf("%d\n",min);
	}
}

int int_length(int n)
{
	int l = 0;
	while(n > 0)
	{
		n = n / 10;
		l++;
	}
	return l;
}
