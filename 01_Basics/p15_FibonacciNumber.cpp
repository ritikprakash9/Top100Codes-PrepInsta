#include<iostream>

using namespace std;

void FibonacciNumber(int n)
{
    int n1 = 0, n2 = 1, n3 = n1 + n2;

    cout << n1 << " " << n2 << " ";

    for(int i = 2; i<n; i++)
    {   
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;

    }
}

int main()
{
    FibonacciNumber(10);
}