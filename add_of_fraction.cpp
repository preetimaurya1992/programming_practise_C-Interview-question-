#include<bits/stdc++.h>
using namespace std;
//Write a program to Add two fractions
int main(){
    int numerator1,denominator1,numerator2,denominator2;
    int x,y,gcd;
    cout<<"enter numenator and denominator"<<endl;
    cin>>numerator1>>denominator1>>numerator2>>denominator2;
    //numerator
    x=numerator1*denominator2+numerator2*denominator1;
    //denominator
    y=denominator1*denominator2;
    //reduce to simplest form of by using gcd
    for(int i=1;i<=x&&i<=y;i++){
        if(x%i==0&&y%i==0)
        gcd=i;
    }
    //final simplest form of fraction
    cout<<x/gcd<<"/"<<y/gcd<<endl;
    return 0;
}