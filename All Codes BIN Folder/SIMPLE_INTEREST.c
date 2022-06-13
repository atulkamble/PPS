/* Calculation of simple interest */
/* Author Name: ABC Date: 04/01/2022 */
#include <stdio.h>
int main()
{

// si=Simple Interest
// p=Principle, r=Rate of Interest, t=Time
int p,t;
float r, si;


 p = 1000;
 r = 8.5;
 t = 3;
 /* formula for simple interest */
 si = p*r*t/100;
 printf ( "the simple interest is %f", si);

 return 0;
}
