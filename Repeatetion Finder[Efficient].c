/* A program to find out how many times a character is repeated in a given string*/
#include <stdio.h>
#include <string.h>
int main()
{
    char data[100];
    int x,y,count=0,lenght;
    scanf("%[^\n]", &data);
    lenght=strlen(data);
    for(x=0;x<=lenght-1;x++)
    {
        if(data[x]=='\0')
        {
            continue;
        }
        for(y=1;y<=lenght-1;y++)
        {
            if(data[x]==data[y]&&x!=y)
            {
                count++;
                data[y]='\0';
            }
        }
        if(count>0)
        {
            printf("%c is repeated %d times\n", data[x],count);
            count=0;
        }
    }
    getch();
}
