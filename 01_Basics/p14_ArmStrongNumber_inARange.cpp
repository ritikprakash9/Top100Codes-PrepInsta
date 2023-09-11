#include<bits/stdc++.h>

using namespace std;

bool isArmStrong(int n)
{
    int num = n;

    int digitLength = 0;

    while (num!=0)
    {
        digitLength++;
        num/=10;
    }
    
    int armNumber = 0;
    num = n;

    while(num!=0)
    {
        armNumber = armNumber + pow((num%10), digitLength);
        num/=10;
    }

    if(n==armNumber)
    return true;

    return false;
    
}

void printArmStrong(int range1, int range2)
{
    for(int i = range1; i<=range2; i++)
    {
        bool val = isArmStrong(i);

        if(val == true)
        {
            cout << i << " ";
        }
    }

    cout << endl;
}
int main()
{
    printArmStrong(1, 10000);
}