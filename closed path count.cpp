#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int number;
	int count=0;
    int n;
    cin>>number;
    while (number>0)
    {
        n=number%10;
        if(n==0 || n==4 || n==6 || n==9)
        {
            count++;
        }
        else if (n==8) {
        count+=2;
        }
        number=number/10;
    }
    cout<<count;
}
