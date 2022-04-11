#include<bits/stdc++.h>
using namespace std;
long long int x[200000],a, b, c, d, e, f;
long long int fn( long long int n )
{
    for(int i=0; i<=n; i++)
    {
        if( i == 0 )
        {
            x[i]=a;
            continue;
        }
        if( i == 1 )
        {
            x[i]=b;
            continue;
        }
        if( i == 2 )
        {
            x[i]=c;
            continue;
        }
        if( i == 3 )
        {
            x[i]=d;
            continue;
        }
        if( i == 4 )
        {
            x[i]=e;
            continue;
        }
        if( i == 5 )
        {
            x[i]=f;
            continue;
        }
        x[i] = x[i-1] + x[i-2] + x[i-3] + x[i-4] + x[i-5] + x[i-6];
        x[i] = x[i] % 10000007;
    }
    return x[n];
}
int main()
{
    long long int n,i,cases;
    scanf("%lld",&cases);
    for(i=1; i<=cases; i++)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n",i,fn(n)%10000007);
    }
    return 0;
}
