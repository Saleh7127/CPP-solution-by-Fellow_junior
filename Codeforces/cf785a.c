#include<stdio.h>
#include<string.h>
int main()
{
    int b,i,s=0;
    char a[1000];
    scanf("%d",&b);
    for(i=0; i<b ; i++)
    {
       scanf("%s",&a);
        if(a[0]=='T')
            s+=4;
        if(a[0]=='C')
            s+=6;
        if(a[0]=='O')
            s+=8;
        if(a[0]=='D')
            s+=12;
        if(a[0]=='I')
            s+=20;
    }
    printf("%d\n",s);

    return 0;
}
