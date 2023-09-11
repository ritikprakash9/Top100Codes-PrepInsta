#include<iostream>

using namespace std;

int digitSum(int n)
{
    int num = n;

    int sum = 0;
    while(num!= 0)
    {
        sum = sum + (num%10);
        num/=10;
    }

    return sum;
}
int main()
{
    cout << digitSum(123456789);
}