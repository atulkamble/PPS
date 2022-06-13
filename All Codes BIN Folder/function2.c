#include <stdio.h>
#include <stdlib.h>
int factorial();
void main()
{
int number, fact;
printf("Enter any Number: ");
scanf("%d",&number);
fact=factorial(number);
printf("factorial of number is %d", fact);
exit (0);
}

int factorial(int n)
{
if (n==0) return(1);
return(n*factorial(n-1));
}
