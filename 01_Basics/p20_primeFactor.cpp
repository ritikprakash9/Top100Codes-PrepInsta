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
void printFactor(int n)
{
    int total = 0;
    cout << "Factor of Number " << n << " is: ";
    for(int i = 1; i<=n; i++)
    {
        if(n%i==0)
        {
            if(checkPrime(i) == true)
            {
                cout << i << " ";
                total++;
            }
        }
    }
    cout << endl << "Total Prime Factor of " << n << " are " << total << endl;
}
int main()
{
    printFactor(3240);
    printFactor(210);
}