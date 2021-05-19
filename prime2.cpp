#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=1;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			cout<<"not prime";
			count=0;
			break;
		}
	}
	if(count)
	{
		cout<<"prime number";
	}
	return 0;
}
