#include<iostream>

using namespace std;

bool checkPrime(int n)
{
    if(n==1)
    return false;
    for(int i = 2; i<n; i++)
    {
        if(n%i==0)
        return false;   
    }

    return true;
}

void printPrime(int range1, int range2)
{
    int total = 0;
    for(int i = range1; i<=range2; i++)
    {
        bool val = checkPrime(i);

        if(val == true)
        {
            cout << i << " ";
            total++;
        }
        
    }

    printf("\nTotal prime number between %d to %d is %d", range1, range2, total);
}
int main()
{
    printPrime(1, 50);
}