#include<iostream>
using namespace std;

int prime(int n)
{
    if(n==2) 
    {
        printf("The number is prime");
    }

    else if(n>2)
    {
        for( int i=2; i<=n/2; i++)
        {
            if (n%i == 0)
            {
                printf("The number is not prime.");
                break;
            }  

            else
            {
                printf("The number is prime.");
                break;
            }

    
        }
    }

   
    
}

int main()
{   int n;
    printf("Enter the number to be checked: ");
    scanf("%d", &n);
    prime(n);
}
