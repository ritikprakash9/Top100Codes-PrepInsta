#include<iostream>

using namespace std;

int factorial(int n)
{
    int ans = 1;

    for(int i =1; i<=n; i++)
    {
        ans = ans * i;
    }

    return ans;
}
int main()
{
    cout << factorial(4) << endl;
    cout << factorial(5) << endl;
}