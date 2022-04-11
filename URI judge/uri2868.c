#include<stdio.h>
int main()
{
    int n,i,a,b,c,d,e,j;
    char ch,bh;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %c %d %c %d",&a,&ch,&b,&bh,&c);
        if(ch=='+') d=a+b;
        else if(ch=='-') d=a-b;
        else if(ch=='*') d=a*b;
        else if(ch=='/') d=a/b;
        if (c>d) e = c-d;
        if (c<d) e = d-c;
        printf("E");
    for(j=0;j<e;j++){
        printf("r");
    }
    printf("ou!\n");
    }

    return 0;
}
