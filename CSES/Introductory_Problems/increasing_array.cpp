#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n, ans;
	ans = 0;
	cin >> n;
	long long a[n];
	for (long long i = 0; i < n; ++i) cin >> a[i];
	for (long long i = 1; i < n; ++i)
	{
		if(a[i] < a[i - 1])
		{
			ans = ans + (a[i - 1] - a[i]);
			a[i] = a[i - 1];
		}
	}
	printf("%lld\n", ans);
}
