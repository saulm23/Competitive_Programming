#include<bits/stdc++.h>

int main()
{
	int t;
	scanf("%d", &t);		
	for(int i = 1; i <= t; ++i)
	{
		scanf("%d %d", &x, &y);
			
	
	}
}
int column(int n)
{
	int col = 1;
	if(n == 1) col = 1;
	else
	{
		col = colum(n - 1) + 2 * n;	
	}
	return col;
}
/*
row y column x
1(1,1) 2(1,2)  9(1,3)  10(1,4)  25(1,5)
4(2,1) 3(2,2)  8(2,3)  11(2,4)  24(2,5)
5(3,1) 6(3,2)  7(3,3)  12(3,4)  23(3,5)
16(4,1) 15(4,2) 14(4,3) 13(4,3) 22(4,5)
17(5,1) 18(5,2) 19(5,3) 20(5,4) 21(5,5)
1 3 7 13 
n1 n2 n3 n4
n1 = 1 
n2 = 1 + (n1 + 0 + 1) => 1 + n1 + 1 => n1 + 2 => n1 + 2 * 1
n3 = 1 + (n2 + 1 + 2) => 1 + n2 + 3 => n2 + 4 => n2 + 2 * 2
n4 = 1 + (n3 + 2 + 3) => 1 + n3 + 5 => n3 + 6 => n3 + 2 * 3
n5 = 1 + (n4 + 3 + 4) => 1 + n4 + 7 => n4 + 8 => n4 + 2 * 4
int col(n)
if n = 1; c = 1
else col(n - 1) + 2 * n
	int n = 1;
	for(int i = 0; i < 9; i++)
	{
		n = n + 2 * i;
		printf("%d\n",n );
	}
*/
