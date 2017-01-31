/* A program to determine whether a number is prime or not*/

#include <stdio.h>

int prime(int num1)
{
    int x,y;

    if(num1==1||num1%2==0&&num1!=2)
    {
        printf("\nIt is not a prime number.\n");
        
        getch();
        return 0;
    }

    else if(num1==2) 
    {
        printf("\nIt is a prime number.\n");
        
        getch();
        return 0;
    }

    else if(num1%2!=0) 
    {
        for(x=3;x<=num1/2;x=x+2) 
        {
            y=num1%x;
            if(y!=0)
                continue;
            printf("\nIt is not a prime number.\n");
            
            getch();
            return 0;
        }

        printf("\nIt is a prime number.\n");
        
        getch();
        return 0;
    }

}

int main()
{
    int num1;

    printf("\nPlease enter the number: ");
    scanf("%d",&num1);
    prime(num1);

    return 0;
}
