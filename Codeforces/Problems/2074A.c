#include<stdio.h>

int main()
{
	int t, l, r, d,u;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%d %d %d %d", &l, &r, &d, &u);
		if(l == r && d == u && r == d)printf("YES\n");
		else printf("NO\n");
	}
}
