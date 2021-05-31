#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int long n;
	int count=0;
    int i;
    int divisor;
    cin>>n;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;
            divisor=i;
            break;
        }
    }
    if(count==0)
    {
        cout<<1;
    }
    else
    {
        cout<<divisor;
    }
}
