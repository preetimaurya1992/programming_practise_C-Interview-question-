#include<bits/stdc++.h>
using namespace std;
//Write a program to find Sum of N natural numbers
int main(){
    int n,sum=0,i;
    cout<<"enter the number"<<endl;
  cin>>n;
  for( i=0;i<=n;i++){
      sum=sum+i;
  }
  cout<<sum<<endl;
    return 0;
}