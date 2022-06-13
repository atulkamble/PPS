#include<stdio.h>
int main( )
{
  int i;
  float Addition,Subtraction,Multiplication,Division;
  float a,b;

  printf("enter value for a: ");
  scanf ( "%f",&a) ;
  printf("enter value for b: ");
  scanf( "%f",&b);

  printf("Menu\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
  printf("Enter your choice :");
  scanf( "%d",&i);



switch (i)
{
    case 1 :
    printf("Sum of %f and %f is : %f",a,b,a+b);
        break;
    case 2 :
    printf("Difference of %f and %f is : %f",a,b,a-b);
        break;
    case 3 :
        printf("Multiplication of %f and %f is : %f",a,b,a*b);
        break;
    case 4 :
        printf("Division of %f and %f is : %f ",a,b,a/b);
        break;
    default :
        printf(" Enter Your Correct Choice.");
        break;
}
return 0;
}
