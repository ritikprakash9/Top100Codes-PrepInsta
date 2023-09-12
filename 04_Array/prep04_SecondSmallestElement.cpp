#include<iostream>

using namespace std;

int secondSmallest(int a[], int size)
{
    int min1 = a[0], min2 = a[0];

    for(int i = 0; i<size; i++)
    {
        if(a[i]<min1)
        {
            min1 = a[i];
        }

        if(a[i]<min2 && a[i]!=min1)
        {
            min2 = a[i];
        }
    }

    return min2;
}

int main()
{
    int arr[] = {70, 40, 30, 20, 10, 90};

    cout << secondSmallest(arr, 6);
}