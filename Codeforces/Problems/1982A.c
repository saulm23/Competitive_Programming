#include <stdio.h>

int main()
{
	long long t, x1, x2, y1, y2;
	scanf("%lld", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%lld %lld", &x1, &y1);
		scanf("%lld %lld", &x2, &y2);
		if((x1 > y1 && x2 > y2) || (y1 > x1 && y2 > x2)) printf("YES\n");	
		else printf("NO\n");
	}
}
/*

if the lower is still the lower yes
else no

*/
