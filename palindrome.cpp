#include<bits/stdc++.h>
using namespace std;
//Write a program to identify if the number is Palindrome or not
int main(){
    int n ,rem,reverse=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    int original=n;
    while (n!=0)
    {
      rem=n%10;
      reverse=reverse*10+rem;
      n=n/10;
    }
    if(reverse==original)
    cout<<"palindrome"<<endl;
    else
    cout<<"Not palindrome"<<endl;
    return 0;
}