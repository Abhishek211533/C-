#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number";
  cin>>n;
   while(n!= 0)
   {
    int a = n;
    if(a%2 == 0)
    {
        cout<<"the number is  not prime";
    }
    else{
        cout<<"the number is prime";
    }
   }


}