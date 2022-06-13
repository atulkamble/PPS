#include <stdio.h>
void main()
{
float sum = 0;
float marks[10];

    for(float i=0; i<10; i++)
    scanf("%f", &marks[i]);

    for(float i=0; i<10; i++)
    sum = sum + marks[i];

    float avg = sum/10;
    printf("Average Marks = %f", avg);
}
