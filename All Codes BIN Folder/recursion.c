/******************************************
Title: C function to compute factorial of a given number using recursion.
*****************************************/
#include<stdio.h>
#include <stdlib.h>
int factorial(int);
void main()
{
  int num, fact; // Input from User
	printf("\nEnter any positive integer number: ");
	scanf("%d",&num);     // Calling User Defined Function
	if(num<0)
	{printf("\nYou have entered Negative Number.\nPlease Enter Positive Number.\nThank you!\n\n");}
	fact =factorial(num); // Displaying Factorial of a number
  printf("\nFactorial of %d is: %d\n",num, fact);
	exit(0);
}

  int factorial(int n)
{
  if(n==0)	return(1);   // Factorial of 0 is 1
  return(n*factorial(n-1));   // Function calling itself | Recursion
}
