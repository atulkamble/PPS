// String Operation - Compairing the String
#include <stdio.h>
#include <string.h>
int main()
{
char source[]="CITY";
char target[20]="PUNE";
int i,j,k;
i=strcmp(source,"CITY");
j=strcmp(source,target);
k=strcmp(source,"CITYHALL");
printf("%d %d %d\n",i,j,k);

return 0;
}
