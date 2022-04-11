#include<stdio.h>
int main()
{
    int a,b,c,d=0,e=0,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d",&b,&c);
        if(b>c) d++;
        else if(c>b) e++;
    }
    if(d>e) printf("Mishka\n");
    else if(e>d) printf("Chris\n");
     else if(d==e) printf("Friendship is magic!^^\n");
}
