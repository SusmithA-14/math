#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0,number;
	cin>>number;
    int arr[100];
    while(number>0)
    {
        arr[i]=number%2;
        number=number/2;
        i++;
    }
    cout<<arr[3]<<endl;

}

