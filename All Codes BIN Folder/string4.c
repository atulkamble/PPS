// Printing a String
//program not rely on length of the string

#include <stdio.h>
int main()
{
char name[]="HELLO";
char *ptr;
ptr=name; //store base address of string
while(*ptr!='\0')
{
  printf("%c",*ptr);
  ptr++;
}

return 0;
}
