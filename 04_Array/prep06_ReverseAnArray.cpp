#include<bits/stdc++.h>

using namespace std;


vector<int> reverseArray(vector<int> &a)
{
    for(int i = 0; i<a.size()/2; i++)
    {
        swap(a[i], a[(a.size()-i)-1]);
    }
    return a;
}
int main()
{
    vector<int> arr = {10, 20, 30, 50, 89};

    reverseArray(arr);

    for(int i = 0; i<arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}