#include<iostream>

using namespace std;

int nthTermOfFib(int n)
{
    int n1 = 0, n2 = 1, n3 = n1+n2;

    if(n==1)
    return n1;

    else if(n==2)
    return n2;

    else
    {
        for(int i = 2; i<n;i++ )
        {
            if((i+1)==n)
            return n3;

            n1 = n2;
            n2 = n3;
            n3 = n1 + n2;
        }
    }
}
int main()
{
    int fib = nthTermOfFib(5);
    cout << fib << endl;
}