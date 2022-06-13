
// Menu driven C program || Basic Arithmetic Operations

#include <stdio.h>

int main()
{

  float number1, number2, answer;
  int choice;

  do
  {

    printf("\nEnter the First Number : ");
    scanf("%f",&number1);
    printf("\nEnter the Second Number : ");
    scanf("%f",&number2);

//Displaying Menu

    printf("\n-----Main Menu----\n1.Add");
    printf("\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

           switch (choice)
           {
                 case 1: answer= number1+number2;
                 printf("\nThe addition of given two numbers is : %f",answer);
                 break;

                 case 2: answer= number1-number2;
                 printf("\nThe substraction of given two numbers is : %f",answer);
                 break;

                 case 3: answer= number1*number2;
                 printf("\nThe multiplication of given two numbers is : %f",answer);
                 break;

                 case 4: answer= number1/number2;
                 printf("\nThe division of given two numbers is : %f",answer);
                 break;

                 case 5: break;

                 default: printf("\nYou Entered Wrong Choice\n");
                          break;
            }
  }
  while (choice!=5);
  return 0;
}
