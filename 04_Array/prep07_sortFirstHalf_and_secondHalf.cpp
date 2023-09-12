/*
-> Sort first half in ascending order and second half in descending 
*/

#include<bits/stdc++.h>

using namespace std;


void ascendingDescending(int a[], int size)
{
    // First Half
    int n = size/2;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
    }

    // Second Half

    for(int i = n; i<size; i++)
    {
        for(int j = n; j<size-i; j++)
        {
            if(a[j]<a[j+1])
            swap(a[j], a[j+1]);
        }
    }

    for(int i = 0; i<size; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int arr[] = {3, 2, 4, 1, 10, 30, 40, 20};

    int len = sizeof(arr)/sizeof(int);
    ascendingDescending(arr, len);
}