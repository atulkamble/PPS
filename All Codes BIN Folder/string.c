// Title: C program for String operations

#include<stdio.h>    // standard input output header
#include<stdlib.h>
#include<string.h>  //string header

int main()
{
    printf("\n \t \t String Operations \n");

    int choice;
    int length;
    // string Declaration
    char string1[20]="PUNE";
    char string2[20]="CITY";


// Taking input from user - string1 &string 2
    printf("\nEnter the String1");
    scanf("%s",string1);
    printf("\nEnter the String2");
    scanf("%s",string2);


// Printing Menu
            while(1)
            {
                printf("Menu\n");
                printf("1. Print First String \n");
                printf("2. Print Second String \n");
                printf("3. Print Length of String \n");
                printf("4. Print Copy the string \n");
                printf("5. Concatenate the string \n");
                printf("6. Exit \n");
                printf("Enter your choice :  ");
                scanf("%d",&choice);

                switch(choice)
                {
                    case 1: // Print First String
                    break;

                    case 2: // Print Second String
                    break;

                    case 3: // Calculation Length of the Strings
                    break;

                    case 4: // Copy the string
                    break;

                    case 5: // Concatenate the string
                    break;

                    case 6: // Exit
                            exit(0);
                    break;
                }
              }

    return 0;
}
