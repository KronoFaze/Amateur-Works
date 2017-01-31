/* A program to find out the factorial of any number */

#include <stdio.h>

int factorial (int x)
{
	int a,c;
	
	for(c=1,a=1; c<=x; c++) 
	{
		a=a*c;
	}

	return a;
}

int main()
{
	int input,x,b;

	printf("Please enter the number: ");
	scanf("%d", &input);
	b= factorial(input);
	printf("\nFactorial of %d is %d", input,b);

	getch();
	return 0;

}

