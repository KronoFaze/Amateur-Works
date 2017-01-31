/* A program to display fibonacci series till given */

#include <stdio.h>

int main()
{
	int a,b,c,x,y,z,fib;

	printf("\nDisplay Fibonacci series till: ");
	scanf("%d", &c);

	for(x=1,y=-1,z=1; x<=c; x++)
	{
		a=y;
		b=z;
		fib=a+b;
		z=fib;
		y=b;
		printf("\n%dth Fibonacci number is %d\n", x,fib);
	}

	getch();
	return 0;
	
}
