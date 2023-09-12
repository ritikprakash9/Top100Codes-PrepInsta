#include<iostream>

using namespace std;

void largestSmallest(int a[], int size);

int main()
{
    int a[] = {10, 89, 67, 56, 45, 78};

    largestSmallest(a, 6);
}

void largestSmallest(int a[], int size)
{
    int max = INT32_MIN;

    int min = INT32_MAX;

    for(int i = 0; i<size; i++)
    {
        if(a[i]>max)
        max = a[i];

        if(a[i]<min)
        min = a[i];
    }

    printf("The largest Element in an array is %d and smallest Element is %d\n", max, min);

}