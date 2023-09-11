#include<iostream>

using namespace std;


int greatestOfThree(int n1, int n2, int n3)
{
    if(n1==n2 && n2==n3)
    printf("%d, %d and %d are equal\n", n1, n2, n3);

    else if(n1>n2 && n2>n3)
    cout << n1 << " is greater\n";

    else if(n2>n1 && n2 > n3)
    cout << n2 << " is greater\n";

    else if(n3>n1 && n3>n2)
    cout << n3 << " is greater\n";

    else if(n1==n2 && n1>n3)
    printf("Both %d and %d are euqal and greater than %d\n", n1, n2, n3);

    else if(n1==n3 && n1>n2)
    printf("Both %d and %d are euqal and greater than %d\n", n1, n3, n2);

    else if(n2==n3 && n1<n2)
    printf("Both %d and %d are euqal and greater than %d\n", n2, n3, n1);
    
}
int main()
{
    greatestOfThree(1,2,3);
    greatestOfThree(1,3,2);
    greatestOfThree(3,2,1);
    greatestOfThree(1,1,1);
    greatestOfThree(2,2,1);
    greatestOfThree(2,1,2);
    greatestOfThree(1,2,2);
}