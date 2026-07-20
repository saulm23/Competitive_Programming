#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n, sum, j, r;
	cin >> n;
	sum = (n * (n + 1)) / 2;
	r = 0;
	for(int i = 0; i < n - 1; ++i)
	{
		cin >> j;
		r = r + j;
	}
	cout << sum - r << endl;
}
