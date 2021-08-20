#include<bits/stdc++.h>
using namespace std;
//Write a program to identify if the character is an alphabet or not
int main(){
    char c;
    cout<<"enter the character"<<endl;
    cin>>c;
    if(c>='a'&&c<='z'||c>='A'&&c<='Z')
     cout<<"alphabate"<<endl;
     else
     cout<<"not alphabate"<<endl;
    return 0;
}