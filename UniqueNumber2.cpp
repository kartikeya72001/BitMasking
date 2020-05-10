// We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )
//
// Input Format
// First line contains the number n. Second line contains n space separated number.
//
// Constraints
// n < 10^5
//
// Output Format
// Output a single line containing the unique numbers separated by space
//
// Sample Input
// 4
// 3 1 2 1
// Sample Output
// 2 3
// Explanation
// Smaller number comes before larger number
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[100000];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		if(!(arr[i]^arr[i+1]))
			i++;
		else
			cout<<arr[i]<<" ";
	}
	return 0;
}
