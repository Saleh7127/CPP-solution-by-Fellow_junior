#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define maX 1000005
int main()
{
    Faster
    ll a,c,d,e,factor,i,j,k,l;
    while(scanf("%lld",&a) && a)
    {
        c=a;
        factor=0;
        for(i=2;i<=sqrt(a); i++)
        {
            if(a%i==0)
            {
                factor++;
                while(a%i==0)
                {
                    a=a/i;
                }
            }
        }
        if(a>1) factor++;
        printf("%lld : %lld\n",c,factor);
    }
    return 0;
}
