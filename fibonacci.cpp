#include<bits/stdc++.h>
using namespace std;
//Write a program to find Fibonacci series up to n
int main(){
    int n,a=-1,b=1,c;
    cout<<"enter the number"<<endl;
    cin>>n;
   for(int i=1;i<=n;i++){
       c=a+b;
       cout<<c;
       a=b;
       b=c;
   }
    return 0;
}