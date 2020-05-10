// We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.
//
// Input Format
// First line contains the number n. Second line contains n space separated number.
//
// Constraints
// N < 10^5
//
// Output Format
// Output a single line containing the unique number
//
// Sample Input
// 7
// 1 1 1 2 2 2 3
// Sample Output
// 3
// Explanation
// 3 is present only once
#include <bits/stdc++.h>
using namespace std;

int getSingle(int arr[], int n)
{
	int ones = 0, twos = 0 ;
	int common_bit_mask;
	for( int i=0; i< n; i++ )
	{
		twos = twos | (ones & arr[i]);
		ones = ones ^ arr[i];
		common_bit_mask = ~(ones & twos);
		ones &= common_bit_mask;
		twos &= common_bit_mask;

	}

	return ones;
}

int main()
{
	int arr[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<getSingle(arr, n);
	return 0;
}
