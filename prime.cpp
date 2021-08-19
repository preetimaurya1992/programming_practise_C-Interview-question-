#include<bits/stdc++.h>
using namespace std;
//Write a program to identify if the number is Prime number or not
int main(){
    int n,count=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
       
    }
     if(count==2)
        cout<<"prime"<<endl;
        else
        cout<<"not prime"<<endl;
    return 0;
}