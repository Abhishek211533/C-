#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int i=2;
    for(i=2;i<=n/2;i++)
    {
       if(n%i==0)
        {
            cout<<"not a prime number";
        }
        else
        {
           cout<<"is a prime number";
           break;
        }
    }

return 0;
}
