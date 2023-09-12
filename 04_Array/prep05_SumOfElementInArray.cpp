#include<iostream>

using namespace std;

int arraySum(int a[], int size)
{
    int sum = 0;
    for(int i = 0; i<size; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main()
{
    int arr[] = {10, 20, 30, 50, 89};

    cout << arraySum(arr, 5);
}