#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp,last_digit,rev=0;
    cin>>n;
    temp=n;
    while(n){
        last_digit=n%10;
        rev=rev*10+last_digit;
        n=n/10;
    }
    cout<<temp<<" reversed "<<"to "<<rev<<endl;
}