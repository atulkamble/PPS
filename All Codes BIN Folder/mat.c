// Calculation of sum of Two Matrix
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

// Calculation of difference of Two Matrix
    for(i = 0; i < row; i++)
        for(j = 0; j < column; j++)
            diff[i][j] = first[i][j] - second[i][j];

// Print Difference of two Matrix
    printf("\n\nThe Ssubtraction of the two entered matrices is: \n\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }

    printf("\n \t \t Thank You");
    return 0;
}
