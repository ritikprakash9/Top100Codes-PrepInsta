#include<iostream>

using namespace std;


int smallestElement(int a[], int size_of_Array);

int main()
{
    int a[] = {10, 89, 67, 56, 45, 78};

    cout << smallestElement(a, 6);
}

int smallestElement(int a[], int size_of_Array)
{
    int min = a[0];
    for(int i = 0; i<size_of_Array; i++)
    {
        if(a[i]<min)
        min = a[i];
    }

    return min;
}