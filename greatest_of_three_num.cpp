#include<bits/stdc++.h>
using namespace std;
//Write a program to find Greatest of three numbers
int main(){
    int a,b,c;
    cout<<"enter the three number"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    cout<<a<<ends<<"greatest number"<<endl;
    else if(b>a&&b>c)
    cout<<b<<ends<<"greatest number"<<endl;
    else
    cout<<c<<ends<<"greatest number"<<endl;

    return 0;    
}