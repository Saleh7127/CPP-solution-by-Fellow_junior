#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define pf(a) printf("%lld",a)
#define loop1(i,a,c) for(i=a;i<=c;i++)
#define loop(i,c) for(i=0;i<c;i++)
int main()
{
    ll a,c,d,e,f,i,j,k,l;
    while(cin>>a && a)
    {
        d=0,e=0;
        while(a--)
        {
            cin>>c;
            d+=c;
            if(d<0)e-=d;
            else e+=d;
        }
         cout<<e<<endl;
    }

    return 0;
}
