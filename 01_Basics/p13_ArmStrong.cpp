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
int main()
{
    cout << isArmStrong(406);
}