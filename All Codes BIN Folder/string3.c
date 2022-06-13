// Printing a String
//program not rely on length of the string

#include <stdio.h>
int main()
{
char name[]="HELLO";
int i=0;
while(name[i]!='\0')
{
  printf("%c",name[i]);
  i++;
}

return 0;
}
