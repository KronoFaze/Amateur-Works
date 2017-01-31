/* A program to determine whether a number is prime or not*/

#include <stdio.h>

int main()
{
	int a,num,x,remainder;

	printf("Please enter a number: ");
	scanf("%d",&num);

	if(num>2 && num%2==0 || num==1)
	{
		x=0;
	}

	for(a=3; a<=num/2; a=a+2)
	{
		remainder=num%a;

		if(remainder==0)
		{
			x=0;
			break;
		}
	}

	if(x==0)
	{
		printf("%d is not a prime number...\n",num );
	}
	else
	{
		printf("%d is a prime number...\n",num );
	}

	getch();
	return 0;
}
