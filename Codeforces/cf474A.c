#include<stdio.h>
int main()
{
    int i,j;
    char a[1000],c,b="qwertyuiopasdfghjkl;zxcvbnm,./";
    scanf("%c",&a);
    scanf("%s",&c);
    if(a=='R')
    {
        for(i=0,j=0; i<30;i++,j++)
        {
          if(c[i]==b[j])
          {
              c[i]==b[j-1];
          }
        }
    }
    if(a=='L')
    {
        for(i=0,j=0; i<30;i++,j++)
        {
          if(c[i]==b[j])
          {
              c[i]==b[j+1] ;
          }
        }
    }

    printf("%s",c);

    return 0;
}
