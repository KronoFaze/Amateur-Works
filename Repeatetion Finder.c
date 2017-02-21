/* A program to find out how many times a character is repeated in a given string*/
#include <stdio.h>
#include <string.h>
int main()
{
    char data[]="12123",temp;
    int x,y,count=0,lenght;
    //scanf("%[^\n]", &data);
    lenght=strlen(data);
    for(x=0;x<=lenght-1;x++)
    {
        for(y=lenght-1;y>0;y--)
        {
            if(x!=y&&data[x]==data[y])
            {
                count++;
                temp=data[lenght-1];
                data[lenght-1]=data[y];
                data[lenght-1]='\0';
                data[y]=temp;
                lenght--;
            }
        }
        printf("%c is repeated %d times\n", data[x], count);
        count=0;
    }
}
