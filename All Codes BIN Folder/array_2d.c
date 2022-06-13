// Title : Get Roll No. & Marks from students
// Program for 2D Array
#include <stdio.h>

int main()
{
int student[4][2];  //2d array declaration
int i;
for (i=0;i<=3;i++)
{
  printf("enter roll no. & marks: ");  //input array dada
  scanf("%d %d",&student[i][0],&student[i][1]);
}

for (i=0;i<=3;i++)   //reading data of array
 printf("%d %d\n",student[i][0],student[i][1]);

  return 0;
}
