#include <stdio.h>

int main()
{
float a,b,c,d;
float grade;
printf("enter the marks of subjects. min0 < max:100 marks\n ");
scanf("%f%f%f%f",&a,&b,&c,&d);

grade=(a+b+c+d)/4;

printf("grade of the student is %f\n",grade);

if(grade>50)
{
  printf("student is pass\n");
}
  else
{
  printf("stduent is fail\n");
}


  return 0;

}
