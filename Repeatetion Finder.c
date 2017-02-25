/* A program to find out how many times a character is repeated in a given string*/
#include <stdio.h>
#include <string.h>
int main()
{
    char data[100],temp;
    int x=0,y,count=0,lenght;
    scanf("%[^\n]", &data);
    lenght=strlen(data);
    while(lenght>=1)
    {
        for(y=lenght-1;y>0;y--)
        {
            if(data[x]==data[y])
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
        temp=data[lenght-1];
        data[lenght-1]=data[x];
        data[lenght-1]='\0';
        data[x]=temp;
        lenght--;
    }
    getch();
}
