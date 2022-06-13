//Title:  Find Average marks obtained by 10 Students

#include <stdio.h>

int main()
{
  int avg, sum=0;
  int i;

int marks[10];    //array declaration

for (i=0;i<=9;i++)
{
printf("Enter Marks: ");
scanf("%d",&marks[i]);   //store data in array
}


for (i=0;i<=9;i++)
sum=sum+marks[i];     //read data from array

avg=sum/10;

printf("average marks=%d\n",avg);

return 0;




}
