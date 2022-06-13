#include <stdio.h>
//Calculate Fibonacci numbers using recursive function.
//A very inefficient way, but illustrates recursion well
int fib(int number)
{7
	if (number == 0) return 0;
	if (number == 1) return 1;
	return (fib(number-1) + fib(number-2));
}

int main()
{	// driver function
	int inp_number;
	printf("Please enter an integer:");
	scanf("%d",&inp_number);
	printf("The Fibonacci number for %d is %d", inp_number,fib(inp_number));
  return 0;
}
