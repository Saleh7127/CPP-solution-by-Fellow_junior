#include<stdio.h>
int main()
{
    int i,n,a,b,c,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        d=0;
        scanf("%d %d",&a,&b);
        if(a%2==0)a++;
        for(c=0;c<b;c++){
        d+=a;
        a+=2;
        }
        printf("%d\n",d);

    }

    return 0;
}
