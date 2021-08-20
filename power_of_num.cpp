#include<bits/stdc++.h>
using namespace std;
//Write a program to find Power of a number
int main(){
    int base,exponent;
    long  power=1;
    cout<<"enter the base and exponent to calculate power"<<endl;
    cin>>base>>exponent;
    while (exponent!=0)
    {
        power=power*base;
        exponent--;
    }
    cout<<power<<endl;
    
    return 0;
}