// check whether a given char is vowel or not 
//input a
//output yes
//input p
// output no 

#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    cin>>c;
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}