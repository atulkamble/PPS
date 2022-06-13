#include <stdio.h>

int main()
{
  float a,b,c;
  int d;

  printf("enter first number");
  scanf("%f",&a);
  printf("enter second number");
  scanf("%f",&b);

  printf("for addition press 1 \n");
  printf("for subraction press 2 \n");
  printf("for multiplication press 3 \n");
  printf("for division press 4 \n");
  scanf("%d",&d);


  printf("the value of a is %f \n",a);
  printf("the value of b is %f \n",b);

  switch (d)
  {
case 1:
c= a+b;
printf("your addition is %f  \n",c);
break;

case 2:
c= a-b;
printf("your subraction is %f  \n",c);
break;

case 3:
c= a*b;
printf("your multiplication  %f  \n",c);
printf("c=a*b");
break;

case 4:
c= a/b;
printf("your division is %f  \n",c);
break;

case 5:
break;

}

    return 0;
}
