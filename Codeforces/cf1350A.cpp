#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define pf(a) printf("%lld\n",a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
    ll n,k,a[100005],c,d,e,f,i,j,l;
    test
    {
        sc2(n,k);
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                n+=i;
                break;
            }
        }
        c=n+(k-1)*2;
        pf(c);
    }
    return 0;
}

