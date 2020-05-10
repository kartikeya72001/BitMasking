#include<iostream>
#include<cstring>
using namespace std;
void Char(string s, int n) //To print the subsequnecs of a string
{
	int j=0;
	while(n>0)
	{
		int last = (n&1);
		if(last){
			cout<<s[j];
		}
		j++;
		n = n>>1;
	}
	cout<<" ";
}
void Subsets(string s, int n)
{
	for(int i=0;i<(1<<n);i++)
	{
		Char(s,i);
	}
	cout<<endl<<(1<<n);
}

int main()
{
	string s;
	cin>>s;
	int n = s.length();
	Subsets(s,n);
	return 0;
}
