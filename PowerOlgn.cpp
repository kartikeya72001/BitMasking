// Take as input x and n, two numbers. Write a function to calculate x raise to power n. Target complexity is O(logn). NOTE: Try both recursive and bitmasking approach.
//
// Input Format
// Enter the number N and its power P
//
// Constraints
// None
//
// Output Format
// Display N^P
//
// Sample Input
// 2
// 3
// Sample Output
// 8
#include <bits/stdc++.h>
using namespace std;

int power(float x, int y)
{
	int temp;
	if(y == 0)
		return 1;
	temp = power(x, y / 2);
	if (y % 2 == 0)
		return temp * temp;
	else
	{
		if(y > 0)
			return x * temp * temp;
		else
			return (temp * temp) / x;
	}
}

int FastExponentiation(int a, int n){
	int ans = 1;
	while(n>0){
		int last_bit = (n&1);
		if(last_bit){
			ans=ans*a;
		}
		a*=a;
		n>>=1;
	}
	return ans;
}

int main()
{
	int x, y;
	cin>>x>>y;
	cout << power(x, y)<<endl;
	cout << FastExponentiation(x,y);
	return 0;
}
