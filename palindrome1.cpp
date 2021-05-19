#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,rev=0,r;
	cout<<"Enter number"<<endl;
	cin>>n;
	temp=n;
	while(n)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	if(rev==temp)
	{
	cout<<temp<<" "<<"is a PALINDROME"<<endl;
	}
	else
	{
	cout<<"NOT PALINDROME";
	}
	return 0;
}
