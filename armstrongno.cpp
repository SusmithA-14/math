#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp,last_digit,sum=0;
    cin>>n;
    temp=n;
    while(n!=0)
    {
        last_digit=n%10;
        sum+=last_digit*last_digit*last_digit;
        n=n/10;
    }
    if(sum==temp){
        cout<<"Armstrong number";
    }
    else{
        cout<<"not an armstrong";
    }
    return 0;
}