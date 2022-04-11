#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,j,s=0;
    char c[10000];
    scanf("%d",&a);
    for(j=0; j<a; j++)
    {
        s=0;
        scanf("%s",&c);
        for(i=0; i<strlen(c); i++)
        {
            if(c[i]=='1')
                s+=2;
            if(c[i]=='2' || c[i]=='3' || c[i]=='5' )
                s+=5;
            if(c[i]=='4')
                s+=4;
            if(c[i]=='6' || c[i]=='9' || c[i]=='0' )
                s+=6;
            if(c[i]=='7')
                s+=3;
            if(c[i]=='8')
                s+=7;
        }
        printf("%d leds\n",s);
    }
}
