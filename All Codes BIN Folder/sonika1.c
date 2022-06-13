#include <stdio.h>

int main()
{
    float h;
    printf("Enter your height:",h);
    scanf("%f",&h);
    if (h>5) //height is in feet
    {
      printf("You are allowed to ride");
    }
    else
    {
      printf("You are not allowed to go on the ride");
    }
    return 0;
}
