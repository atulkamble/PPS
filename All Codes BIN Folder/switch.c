#include<stdio.h>
int main()
{
 int x;
 printf("enter choice");
 scanf("%d",&x);

 switch (x) {
   case 1: printf("Choice is 1");
   break;
   case 2: printf("Choice is 2");
   break;
   case 3: printf("Choice is 3");
   break;
   default: printf("Choice is other than 1,2,3");
   break;
 }
  return 0;
}
