#include<iostream>

using namespace std;

void printFactor(int n)
{
    int total = 0;
    cout << "Factor of Number " << n << " is: ";
    for(int i = 1; i<=n; i++)
    {
        if(n%i==0)
        {
            cout << i << " ";
            total++;
        }
    }
    cout << endl << "Total Factor of " << n << " are " << total << endl;
}
int main()
{
    printFactor(3240);
}