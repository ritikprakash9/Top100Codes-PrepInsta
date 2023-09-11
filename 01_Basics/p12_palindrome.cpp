#include<iostream>

using namespace std;

int reverseNumber(int n)
{
    int num = n;

    int reverse = 0;

    while (num!=0)
    {
        reverse = (reverse*10) + (num%10);
        num/=10;
    }
    
    return reverse;
}

bool isPalindrome(int n)
{
    int num = reverseNumber(n);

    if(num == n)
    return true;

    return false;
}

int main()
{

    int num;
    cin >> num;


    bool check = isPalindrome(num);

    if(check == true)
    cout << "Number is Palindrome\n";

    else
    cout << "Number is not Palindrome\n";
}