#include<iostream>

using namespace std;

int power(int base, int exponent)
{
    int ans = 1;

    for(int i =1; i<=exponent; i++){
        ans = ans * base;
    }

    return ans;
}

int main()
{
    cout << power(2,5) << endl;
    cout << power(3,4) << endl;
}