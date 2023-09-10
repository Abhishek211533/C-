#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    int i = 2;
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            cout << "not prime";
        }
        else
        {
            cout << "prime number";
            i = i + 1;
        }
        break;
    }
    return 0;
}