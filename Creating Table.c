#include <stdio.h>

int main()
{
    int m,n,o;
    n=0;
    printf("\nPlease enter the number: ");
    scanf("%d", &o);
    printf("\nThe table of %d is:\n", o);
    for(m=1;m<=10;m++) {
        n=n+o;
        printf("\n%dX%d=%d\n", o,m,n);
    }
    getch();
    return 0;
}
