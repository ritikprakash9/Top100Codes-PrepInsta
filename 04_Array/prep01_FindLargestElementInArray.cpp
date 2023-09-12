#include<iostream>

using namespace std;

int largestElement(int a[], int size_of_Array)
{
    int max = a[0];

    for(int i = 0; i<size_of_Array; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }

    return max;
}

int main()
{
    int a[] = {10, 89, 67, 56, 45, 78};
    cout << largestElement(a, 6) << endl;
}