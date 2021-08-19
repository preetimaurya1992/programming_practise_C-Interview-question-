#include<bits/stdc++.h>
using namespace std;
//Write a program to find Sum of digits of a number
int main(){
    int n,sum=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    while (n!=0)
    {
        int rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<sum<<endl;
    
    return 0;
}