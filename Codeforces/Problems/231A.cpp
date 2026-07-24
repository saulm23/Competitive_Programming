#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans, a, b, c;
	ans = 0;
	for(int i = 0; i < n; ++i)
	{
		cin >> a >> b >> c;
		//scanf("%d %d %d", &a, &b, &c);
		a = a + b + c;
		if(a >= 2) ans++;
	}
	printf("%ld\n", ans);
}
