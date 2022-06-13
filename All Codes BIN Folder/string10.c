// String Operation - Copy the String
#include <stdio.h>
#include <string.h>
int main()
{
char source[]="PUNE";
char target[20];
printf("target=%s\n",target);
strcpy(target,source);

printf("source=%s \ntarget=%s\n",source,target);

return 0;
}
