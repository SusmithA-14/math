#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=1;
	cin>>n;
	for(int num=1;num<n;num++)
	{
		if(count==1)
		{
			cout<<num;
			break;
	    }
	}
	if(count==1)
	{
		cout<<"prime number";
	}
	return 0;
}
