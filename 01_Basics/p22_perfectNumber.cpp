#include<bits/stdc++.h>

using namespace std;

vector<int> factor(int n)
{ 
    vector<int>ans;
    for(int i = 1; i<=n; i++)
    {
        if(n%i==0)
        {
            ans.push_back(i);
        }
    }

    return ans;
}

bool isPerfect(int n)
{
    vector<int> divisor = factor(n);
    
    int sum = 0;
    for(int i = 0; i<divisor.size()-1; i++)
    {
        sum += divisor[i];
    }

    cout << sum << endl;
    if(sum == n)
    return true;

    return false;
}
int main()
{
    int num = 28;

    if(isPerfect(num) == true)
    cout << num << " is a Perfect Number\n";

    else 
    cout << num << " is not a Perfect number\n";
}