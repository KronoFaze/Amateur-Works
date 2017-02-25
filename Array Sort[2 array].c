#include <stdio.h>

int main()
{
  int i[5]={8,6,3,4,2},j[5];
  int p=0,x,y;
  for(x=0;x<=9;x++)
  {
      for(y=0;y<5;y++)
      {
          if(i[y]==x)
          {
              j[p]=x;
              printf("%d,", j[p]);
              p++;
          }

      }
  }
}
