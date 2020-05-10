#include<iostream>
using namespace std;
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main() //To count the number of set bits between a given range
{
	int q;
	cin>>q;
	while(q>0)
	{
		int a=0, b=0;
		int count=0;
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
			count+=countSetBits(i);
		}
		cout<<count<<endl;
		q--;
	}
	return 0;
}
