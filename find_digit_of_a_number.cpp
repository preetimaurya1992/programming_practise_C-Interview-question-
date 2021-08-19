#include<bits/stdc++.h>
using namespace std;
//Write a program to find Number of digits in an integer
int main(){
 int n,count=0;
 cout<<"enter the number"<<endl;
 cin>>n;

 while(n!=0){
   n=n/10;
   count++;
 }
 cout<<count<<endl;
    return 0;
} 