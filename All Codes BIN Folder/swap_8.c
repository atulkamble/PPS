// C program to swap two numbers using pointers.
#include <stdio.h>
void swap(int *x,int *y) // function to swap the two numbers
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}
int main()
{
    int num1,num2;
    printf("Enter value of number 1: ");
    scanf("%d",&num1);
    printf("Enter value of number 2: ");
    scanf("%d",&num2);
    //displaying numbers before swapping
    printf("\nBefore Swapping: number 1 is: %d, number 2 is: %d\n",num1,num2);
    //calling the user defined function swap()
    swap(&num1,&num2);
    //displaying numbers after swapping
    printf("After  Swapping: number 1 is: %d, number 2 is: %d\n",num1,num2);

    return 0;
}
