#include<stdio.h>

main( )
{

int i;
int j;

for (i=1;i<=3;i++)
{
  printf("i=%d\n",i);

break;
goto;
        for(j=1;j<=i;j++)
        {
          continue;
          printf("j=%d\n",j);
        }
}
return 0;
}
