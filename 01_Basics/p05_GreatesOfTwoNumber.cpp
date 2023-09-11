#include<iostream>

using namespace std;

void PrintGreater(int n1, int n2)
{
    if(n1>n2)
    cout << n1 << " is greater\n";

    else if(n1==n2)
    cout << n1 << " and " << n2 << " are equal\n";

    else
    cout << n2 << " is greater\n";
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    PrintGreater(n1, n2);
}