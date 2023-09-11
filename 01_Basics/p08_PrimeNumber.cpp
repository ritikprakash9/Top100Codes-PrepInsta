#include<iostream>

using namespace std;

bool checkPrime(int n)
{
    for(int i = 2; i<n; i++)
    {
        if(n%i==0)
        return false;   
    }

    return true;
}

int main()
{

    int n;
    cin >> n;
    int prime = checkPrime(n);

    if(prime == 0)
    {
        cout << n << " is not a Prime Number\n";
    }

    else 
    {
        cout << n << " is prime Number\n";
    }
}