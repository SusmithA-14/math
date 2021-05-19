#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,r,count=0;
	cout<<"enter number"<<endl;
	cin>>n;
	while(n!=0)
	{
	    r=n%10;
		n=n/10;
		count++;
	}
	cout<<count;
	return 0;
}
