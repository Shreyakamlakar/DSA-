#include<iostream>
using namespace std;

int EvenOdd(int n)
{
    if(n%2==0)
    {
        printf("The number is even");
    }

    else
    {
        printf("The number is odd");
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    EvenOdd(n);
}
