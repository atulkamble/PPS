#include<stdio.h>
#include<stdlib.h>
void mit(); //Function Declaration
void vit(); //Function Declaration
void rit();
void main()
{
printf("I am in Main\n");
mit();     // Function Calling
vit();
rit();
exit(0);
}

void mit()   // Function Definition
{
printf("I am in MIT\n");

}

void vit()
{
  printf("I am in VIT\n");
}

void rit()
{
  printf("I am in RIT\n");
}
