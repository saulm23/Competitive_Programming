#include <stdio.h>

int main()
{
	int t, a, b, c;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d %d", &a, &b, &c);
		if(a == (b + c) || b == (a + c) || c == (a + b)) printf("YES\n");
		else printf("NO\n");
	}
}
/*
a = b + c 
b = a + c
c = a + b
*/

