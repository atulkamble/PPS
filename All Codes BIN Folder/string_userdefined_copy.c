// User Defined Function || Copy

#include <stdio.h>
void StringCopy(char s1[], char s2[]);
int main()
{
    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    scanf("%s",s1);
//calling function
    StringCopy(s1,s2);

return 0;
}

void StringCopy(char s1[], char s2[])
{
    int i;
    for(i = 0; s1[i]!='\0'; ++i)
   {
       s2[i] = s1[i];
   }
   s2[i] = '\0';
   printf("String s2: %s", s2);
}
