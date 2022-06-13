// String Operation - Concatnate the String
#include <stdio.h>
#include <string.h>
int main()
{
char source[]="CITY";
char target[20]="PUNE";
printf("target=%s\n",target);
strcat(target,source);

printf("source=%s \ntarget=%s\n",source,target);

return 0;
}
