#include<stdio.h>
int main()
{
    int a,b,c,d,k,x,y,z,i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);
        if(a%c==0) x=a/c;
        if(a%c!=0) x=a/c + 1;
        if(b%d==0) y=b/d;
        if(b%d!=0) y=b/d + 1;
        z=x+y;
        if(z>k) printf("-1\n");
        if(z<=k) printf("%d %d\n",x,y);
    }
    return 0;
}
