#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0,n,m,i,j;
    scanf("%d",&n);
    char x[100];
    m = 6-n;
    while(n--)
    {
        scanf("%s",x);
        if(x[0]=='p')
            a=1;
        else if(x[0]=='g')
            b=1;
        else if(x[0]=='b')
            c=1;
        else if(x[0]=='o')
            d=1;
        else if(x[0]=='r')
            e=1;
        else if(x[0]=='y')
            f=1;
    }
    printf("%d\n",m);
    if(a==0)
        printf("Power\n");
    if(b==0)
        printf("Time\n");
    if(c==0)
        printf("Space\n");
    if(d==0)
        printf("Soul\n");
    if(e==0)
        printf("Reality\n");
    if(f==0)
        printf("Mind\n");
    return 0;
}
