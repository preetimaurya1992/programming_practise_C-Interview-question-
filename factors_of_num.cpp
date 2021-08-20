#include<bits/stdc++.h>
using namespace std;
//Write a program to find the Factors of a number
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0)
        cout<<i<<" ";
    }
    return 0;
}