#include<stdio.h>
int main()
{
    int s,i,a,a1,b,b1,c,c1,d,d1,ar;
    scanf("%d",&s);
    for(i=1; i<=s; i++)
    {
        ar=0;
        scanf("%d %d %d %d %d %d",&a,&a1,&b,&b1,&c,&c1);
        d=a+c-b;
        d1=a1+c1-b1;
        ar=(0.5)*(((a*b1)+(b*c1)+(c*d1)+(d*a1))-((a1*b)+(b1*c)+(c1*d)+(d1*a)));
        printf("Case %d: %d %d %d\n",i,d,d1,abs(ar));

    }
    return 0;
}
