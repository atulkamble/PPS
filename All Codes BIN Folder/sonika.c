#include <stdio.h>

int main()
{
    float r,h;
    float v;

    printf("Enter the radius of the cone:",r);
    scanf("%f",&r);
    printf("Enter the height of the cone:",h);
    scanf("%f",&h);

    v=3.14*r*r*(h/3);
    printf("Volume of the cone is %f",v);


    return 0;
}
