// Title: C program for String operations

#include<stdio.h>    // standard input output header
#include<stdlib.h>
#include<string.h>  //string header

int main()
{
    printf("\n \t \t String Operations \n");

    int choice;
    int length1;
    int length2;
    // string Declaration
    char string1[20];
    char string2[20];

// Taking input from user - string1 &string 2
    printf("\nEnter the First String: ");
    scanf(" %s",string1);
    printf("\nEnter the Second String: ");
    scanf(" %s",string2);


// Printing Menu
            while(1)
            {
                printf("\nMenu\n");
                printf("1. Print First String \n");
                printf("2. Print Second String \n");
                printf("3. Print Length of Strings \n");
                printf("4. Copy the string \n");
                printf("5. Concatenate the strings \n");
                printf("6. Reverse the strings \n");
                printf("7. Uppercase the strings \n");
                printf("8. Lowercase the strings \n");
                printf("9. Exit \n");
                printf("\nEnter your choice :  ");
                scanf("%d",&choice);

                switch(choice)
                {
                    case 1: // Print First String
                          printf("%s",string1);
                    break;

                    case 2: // Print Second String
                           printf("%s",string2);
                    break;

                    case 3: // Calculation Length of the Strings
                    length1=strlen(string1);
                    length2=strlen(string2);
                    printf("string1=%s & length=%d",string1,length1);
                    printf("string2=%s & length=%d",string2,length2);
                    break;

                    case 4: // Copy the string
                    printf("original string=%s\n",string1);
                    strcpy(string1,string2);
                    printf("copying string=%s \n string after copying replacing the original=%s\n",string1,string2);
                    break;

                    case 5: // Concatenate the string
                    strcat(string1,string2);
                    printf("Concatenated string=%s\n",string1);
                    break;

                    case 6: //Reverse The Strings
                    strrev(string1);
                    strrev(string2);
                    printf("the Reverse Strings are %s & %s\n",string1,string2);
                    break;

                    case 7: // Uppercase the String
                    strupr(string1);
                    strupr(string2);
                    printf("Upepercase String1 is %s\n",string1);
                    printf("Upepercase String2 is %s\n",string2);
                    break;

                    case 8:// Lowercase the String
                    strlwr(string1);
                    strlwr(string2);
                    printf("Lowercase String1 is %s\n",string1);
                    printf("Lowercase String2 is %s\n",string2);
                    break;

                    case 9: // Exit
                            exit(0);
                    break;
                }
              }

    return 0;
}
