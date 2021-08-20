#include<bits/stdc++.h>
using namespace std;
//Write a program to identify if the number is Armstrong number or not
int main(){
    int n,rem,sum=0,original;
    cout<<"enter the number"<<endl;
    cin>>n;
    original=n;
    while (n!=0)
    {
    rem=n%10;
    sum=sum+(rem*rem*rem);
    n=n/10;
    }
    if(sum==original)
    cout<<"armstrong number"<<endl;
    else
    cout<<"not armstrong number"<<endl;
    return 0;
}