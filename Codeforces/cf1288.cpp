#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,n,d,x,t,i,c;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        c=0;
        a=0;
        scanf("%lld %lld",&n,&d);
        x=n/2;
        if(d%(x+1)==0)
        {
            a=d/(x+1);
        }
        if(d%(x+1)!=0)
        {
            a=d/(x+1)+1;
        }
        c=a+x;
        if(c<=n)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
