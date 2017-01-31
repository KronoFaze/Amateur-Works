/* A program to display fibonacci series till given */

#include <stdio.h>

int fibonacci(int a)
{
	int fib[49],x;

	fib[0]=0;
	fib[1]=1;

	for(x=0; x<a; x++)
	{
		fib[x+2]=fib[x+1]+fib[x];
		printf("\n%dth Fibonacci number is: %d\n", x+1,fib[x]);
	}
}


int main()
{

	int a;

	printf("\nFibonacci series till: ");
	scanf("%d", &a);

	fibonacci(a);
	getch();
	return 0;
}
