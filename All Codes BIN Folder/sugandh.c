//Using the recurtion
#include<stdio.h>
int factorial(int);
int main()
{
    int num, fact;
    printf("Enter the value for which you want to find the factorial\n");
    scanf("%d",&num);
    fact=factorial(num);
    printf("The factorial of the number %d is  %d\n",num,fact);
    return 0;
}
int factorial(int n)
{
    if(n==0) return (1);
    return(n*factorial(n-1));

}
