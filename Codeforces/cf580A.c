#include<stdio.h>
int main()
{
    int a,c=0,i,s=0,j;
    scanf("%d",&a);
    int b[a];
    for(i=1; i<=a; i++)
    {
        b[0]=0;
        scanf("%d",&b[i]);
        if(b[i]>= b[i-1])
        {
            c++;
            if(c>s)
                s=c;
        }
        else
        {
            c=1;
        }
    }
    printf("%d\n",s);
}
