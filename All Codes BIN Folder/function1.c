#include <stdio.h>

void italy();
void brazil();
void argentina();

int main()
{
  printf("I am in the main\n");
  argentina();
    brazil();
      italy();
  return 0;
}
void italy()
{
  printf("I am in Italy\n");
}

void brazil()
{
  printf("I am in Brazil\n");
}

void argentina()
{
    printf("I am in Argentina\n");
}
