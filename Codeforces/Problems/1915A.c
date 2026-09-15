#include <stdio.h>

int main(void)
{
	int t, a, b, c;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		if(a == b) printf("%d\n", c);
		else
		{
			if(a == c) printf("%d\n", b);
			else printf("%d\n", a);
		}
	}
}
