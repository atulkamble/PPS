#include <stdio.h>
int main()
{

float a,b,c,d;
float grade;
printf("enter your subject marks || max:100 , min:0\n");
scanf("%f%f%f%f",&a,&b,&c,&d);
grade=(a+b+c+d)/4;

printf("grade of the student is %f\n",grade);

if(grade<50)
{
  printf("student is fail.\n");
}
else
{
  printf("student is pass.\n");
}
  return 0;
}
