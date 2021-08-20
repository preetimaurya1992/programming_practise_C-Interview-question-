#include<bits/stdc++.h>
using namespace std;
//Write a program to identify if the number is Perfect number or not
int main(){
    int n,sum=0;
cout<<"enter the number"<<endl;
cin>>n;
for(int i=1;i<n;i++){
    if(n%i==0)
    {
        sum=sum+i;
    }
}
  if(sum==n)
  cout<<"perfect number"<<endl;
  else
  cout<<"not perfect"<<endl;
    return 0;
}
