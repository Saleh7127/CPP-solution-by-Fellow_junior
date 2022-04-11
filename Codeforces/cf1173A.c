#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if((a-b)>c) printf("+\n");
        else  printf("?\n");
    }
    else if(a<b)
    {
        if((b-a)>c) printf("-\n");
        else  printf("?\n");
    }
    else if(a==b)
    {
        if(c==0) printf("0\n");
        else printf("?\n");
    }

    return 0;
}
