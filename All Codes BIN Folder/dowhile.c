#include<stdio.h>
int main()
{
int Number, Sum = 0;
do {
	printf("Enter a number. Type 0(zero) to end the input");
	scanf("%d",&Number);
	Sum = Sum + Number;
	} while (Number != 0);


return 0;
}
