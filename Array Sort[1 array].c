#include <stdio.h>

int main()
{
  int i[5]={8,6,3,4,2};
  int p=0,x,y,temp;
  for(x=0;x<=9;x++)
  {
      for(y=0;y<5;y++)
      {
          if(i[y]==x)
          {
              temp=i[y];
              i[y]=i[p];
              i[p]=temp;
              printf("%d,", i[p]);
              p++;
          }

      }
  }
}
