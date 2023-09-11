#include<iostream>

using namespace std;

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

bool isStrong(int n)
{
    int num = n;
    
    int strongNumber = 0;

    while (num!=0)
    {
        strongNumber+= factorial(num%10);
        num/=10;
    }
    
    if(n==strongNumber)
    return true;

    return false;
}
int main()
{
    int n = 145;

    if(isStrong(n)==true)
    cout << n << " is Strong Number\n";

    else
    cout << n << " is not a Strong Number\n";
}