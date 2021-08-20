#include<bits/stdc++.h>
using namespace std;
//Write a program to identify if the year is Leap year or not
int main(){
      int year;
      cout<<"enterr the year"<<endl;
      cin>>year;
      if(year%100==0){
         if(year%400==0)
         cout<<"leap yaer"<<endl;
         else{
         cout<<"not leap year"<<endl;
         }
      }
      else{
            if(year%4==0)
            cout<<"leap year"<<endl;
            else{
            cout<<"not leap year"<<endl;
            }
      }
    return 0;
}