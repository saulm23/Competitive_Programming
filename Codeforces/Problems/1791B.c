#include <stdio.h>

int main()
{
	int t, n, x, y, r;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		char arr[n];
		x = 0;
		y = 0;
		r = 0;
		for(int j = 0; j < n; j++)
		{
			scanf("%c", &arr[j]);
			switch(arr[j])
			{
				case 'R':
					x = x + 1;
				case 'L':
					x = x - 1;
				case 'U':
					y = y + 1;
				case 'D':
					y = y - 1;
			}
			if(x == 1 && y == 1)
			{
				printf("YES\n");
				break;
				r = 1;
			}
		}
		if(r == 0) printf("NO\n");
	
	}
}
