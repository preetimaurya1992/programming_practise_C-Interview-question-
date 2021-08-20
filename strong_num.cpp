#include<bits/stdc++.h>
using namespace std;
//Write a program to identify if the number is Strong number or not
int fact(int n){
    if(n==0)
    return 1;
    else{
        return (n*fact(n-1));
    }
}
int main(){
    int rem,n,original,facto,sum=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    original=n;
    while (n!=0)
    {
       rem=n%10;
       facto=fact(rem);
       n=n/10;
       sum=sum+facto;
    }
    if(sum==original)
    cout<<"strong number"<<endl;
    else
    cout<<"not strong number"<<endl;
    return 0;
}