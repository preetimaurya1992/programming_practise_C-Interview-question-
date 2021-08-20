#include<bits/stdc++.h>
using namespace std;
//Write a program to find GCD of two numbers
int main(){
    int a,b,gcd=1;
    cout<<"enter the two number for gcd"<<endl;
    cin>>a>>b;
    for(int i=1;i<=a&&i<=b;i++){
        if(a%i==0&&b%i==0)
        gcd=i;
    }
    cout<<gcd<<endl;
    return 0;
}