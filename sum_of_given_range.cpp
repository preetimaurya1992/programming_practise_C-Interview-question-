#include<bits/stdc++.h>
using namespace std;
//Write a program to find Sum of numbers in a given range
int main(){
    int start,end,i,sum=0;
    cout<<"enter the two number"<<endl;
    cin>>start>>end;
    for(i=start;i<=end;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}