// Title: C function to compute factorial of a given number using recursion
#include <stdio.h>
#include<stdlib.h>
int factorial (int);
void main()
{
    int num, fact; //input from user
    printf("\nEnter any integer number:");
    scanf("%d", &num); //calling user defined function
    fact=factorial(num); //displaying factorial of a number
    printf("\nfactorial of %d is: %d\n", num, fact);
    exit(0);

}
    int factorial(int n)
    {
        if(n==0) return(1); //factorial of 0 is 1
        return(n*factorial(n-1)); //function calling itself / Recursion
    }
