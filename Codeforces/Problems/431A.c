#include <stdio.h>

int main()
{
	int t, h, m, ans;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &h, &m);
		ans = (23 - h) * 60 + (60 - m);
		printf("%d\n", ans);
	}	
}
