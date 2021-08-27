#include<bits/stdc++.h>
using namespace std;
//Write a program to reverse a given number
int main(){
    int n,rem,rev=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    while (n!=0)
    {
      rem=n%10;
      rev=rev*10+rem;
      n=n/10;
    }
  cout<<rev<<endl;
    return 0;
}