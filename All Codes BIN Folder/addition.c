#include<stdio.h>
int add(int x,int y);  /* Function Declaration / Prototype*/
void main()      /* Calling Function*/
{
     int a,b,c;
  	 printf("Enter two numbers : ");
     scanf("%d%d",&a,&b);
     c=add(a,b);         /*Function Call*/
  	 printf("\n\n\tAddition of %d and %d is %d",a,b,c);
}

int add(int x,int y)  /*Function Definition (Called Function)*/
{
  	int z;
  	z = x + y;
  	return(z);
}
