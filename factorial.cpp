#include<bits/stdc++.h>
using namespace std;
//Write a program to find Factorial of a number
int factorial(int x){
    if(x==0)
    return 1;
    else
    return(x*factorial(x-1));   
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int fact=factorial(n);
    cout<<fact<<endl;
    return 0;
}