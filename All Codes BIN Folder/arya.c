#include <stdio.h>
int main()
{
    char c;
    int a, b;
    float output;
    printf (" Choose an operator(+, -, *, /) to perform the operation in C Calculator \n ");
    scanf ("%c", &c);
    if (c == '/' )
    {
        printf (" You have selected: Division");
    }
    else if (c == '*')
    {
        printf (" You have selected: Multiplication");
     }

    else if (c == '-')
    {
        printf (" You have selected: Subtraction");
     }
        else if (c == '+')
    {
        printf (" You have selected: Addition");
     }
    printf (" \n Enter the first number: ");
    scanf(" %d", &a);
    printf (" Enter the second number: ");
    scanf (" %d", &b);

    switch(c)
    {
        case '+':
            output = a + b;
            printf (" Addition of %d and %d is: %.2f", a, b, output);
            break;

        case '-':
            output = a - b;
            printf (" Subtraction of %d and %d is: %.2f", a, b, output);
            break;

        case '*':
            output = a * b;
            printf (" Multiplication of %d and %d is: %.2f", a, b, output);
            break;

        case '/':
            if (b == 0)
            {
                printf (" \n Divisor cannot be zero. Please enter another value ");
                scanf ("%d", &b);
                }
            output = a / b;
            printf (" Division of %d and %d is: %.2f", a, b, output);
            break;
        default:
            printf (" Something is wrong!");
    }
    return 0;
} 
