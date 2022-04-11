#include<stdio.h>
int main()
{
    int a,b[1000],c=0,bi=0,ba=0;
    int i;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&b[i]);

    }
    for(i=0; i<a; i++)
    {
        if(i%3==0)
            c+=b[i];
        else if(i%3==1)
            bi+=b[i];
        else if(i%3==2)
            ba+=b[i];
    }
    if(c>=bi && c>=ba)
        printf("chest\n");
    else if(bi>=c && bi>=ba)
        printf("biceps\n");
    else if(ba>=c && ba>=bi)
        printf("back\n");

  return 0;
}
