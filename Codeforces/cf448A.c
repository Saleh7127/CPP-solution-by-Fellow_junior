#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,n,g=0,h=0,i=0,j=0,k=0;
    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&n);
    g=a+b+c;
    h=d+e+f;
    if(g==0)
    {
        i=0;
    }
    if(g>0 && g<=5)
    {
        i=1;
    }
    if(g>5)
    {
        if(g%5==0)
            i=g/5;
        else
            i=g/5 +1;
    }
    if(h==0)
    {
        j=0;
    }
    if(h>0 && h<=10)
    {
        j=1;
    }
    if(h>10)
    {
        if(h%10==0)
            j=h/10;
        else
            j=h/10 +1;
    }
    k=i+j;
    if(k<=n)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
