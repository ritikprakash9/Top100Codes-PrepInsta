#include<iostream>

using namespace std;

int reverseNumber(int n)
{
    int num = n;

    int reverse = 0;

    while (num!=0)
    {
        reverse = (reverse*10) + (num%10);
        num/=10;
    }
    
    return reverse;
}
int main()
{
    cout << reverseNumber(112233) << endl;
}