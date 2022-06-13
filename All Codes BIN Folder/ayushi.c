#include <stdio.h>

int main()
{

const float pi=22.0/7.0 ;
float r,h,volume;
printf("Enter radius and height of the cone\n");
scanf("%f %f",&r,&h);


volume = pi*r*r*h/3 ;
printf("The volume of cone is %f \n" ,volume);

    return 0;
}
