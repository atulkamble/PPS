/*
Title": Program to calculate area of traiangle
*/
// anything cxan be writen
#include<stdio.h>
int main()
{
  //length, breadth
float l,b;
float a;


printf("enter length");
scanf("%f",&l);
printf("enter breadth");
scanf("%f",&b);

a=0.5*l*b;

printf("area of a triangle is %f",a);

return 0;
}
