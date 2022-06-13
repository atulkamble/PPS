// Title: C program for matrix operations - Addition & Substraction

#include<stdio.h>    // standard input output header
#include<stdlib.h>  //standard library header

int main()
{
    printf("\n \t \t Matrix Operations \n");

// Array Declaration
    int choice, row, column, i, j, first[10][10], second[10][10], sum[10][10], diff[10][10];

// Taking input from user - no. of row & columns
    printf("\nEnter the number of rows and columns of the first matrix \n\n");
    scanf("%d%d", &row, &column);

// Matrix Input
    printf("\nEnter the %d elements of the first matrix \n\n", row*column);
    for(i = 0; i < row; i++)   // to iterate the rows
        for(j = 0; j < column; j++)   // to iterate the columns
            scanf("%d", &first[i][j]);

    printf("\nEnter the %d elements of the second matrix \n\n", row*column);
    for(i = 0; i < row; i++)   // to iterate the rows
        for(j = 0; j < column; j++)   // to iterate the columns
            scanf("%d", &second[i][j]);

// Printing Menu
            while(1)
            {
                printf("Menu\n");
                printf("1. Print First Matrix \n");
                printf("2. Print Second Matrix \n");
                printf("3. Print Addition of two matrices \n");
                printf("4. Print Substraction of two matrices \n");
                printf("5. Exit \n");
                printf("Enter your choice :  ");
                scanf("%d",&choice);

                switch(choice)
                {
                    case 1: // Print First Matrix
                            printf("\n\nThe first matrix is: \n\n");
                            for(i = 0; i < row; i++)   // to iterate the rows
                            {
                              for(j = 0; j < column; j++)   // to iterate the columns
                              {
                                printf("%d\t", first[i][j]);
                              }
                              printf("\n");
                            }
                    break;

                    case 2: // Print Second Matrix
                            printf("\n\nThe second matrix is: \n\n");
                            for(i = 0; i < row; i++)   // to iterate the rows
                            {
                              for(j = 0; j < column; j++)   // to iterate the columns
                              {
                                printf("%d\t", second[i][j]);
                              }
                              printf("\n");
                            }
                    break;

                    case 3: // Calculation of sum of Two Matrix
                            for(i = 0; i < row; i++)
                                for(j = 0; j < column; j++)
                                sum[i][j] = first[i][j] + second[i][j];    //formula

                           // Print Sum of two Matrix
                          printf("\n\nThe sum of the two entered matrices is: \n\n");
                            for(i = 0; i < row; i++)
                              {
                                for(j = 0; j < column; j++)
                                {
                                  printf("%d\t", sum[i][j]);
                                }
                                printf("\n");
                              }
                    break;

                    case 4: // Calculation of difference of Two Matrix
                              for(i = 0; i < row; i++)
                                for(j = 0; j < column; j++)
                                diff[i][j] = first[i][j] - second[i][j];

                            // Print Difference of two Matrix
                              printf("\n\nThe Subtraction of the two entered matrices is: \n\n");
                              for(i = 0; i < row; i++)
                              {
                                for(j = 0; j < column; j++)
                                {
                                  printf("%d\t", diff[i][j]);
                                }
                                printf("\n");
                              }

                    break;

                    case 5: // Exit
                            exit(0);
                    break;
                  }
                }

    return 0;
}
