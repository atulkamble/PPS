#include <stdio.h>
int main()
{
  int limit;
  int limit1;
  int i;

  printf("enter the value i");
  scanf("%d",&limit);
  printf("enter the value j");
  scanf("%d",&limit1);

  for(i=1;i<=limit;i++)
  for(j=1;j<=limit1;j++)

printf("%d\n",i);
printf("%d\n",j);

  return 0;

}
