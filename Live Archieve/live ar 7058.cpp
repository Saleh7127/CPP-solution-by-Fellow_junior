#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define pf(a) printf("%lld",a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
    ll cas,a[100000],c[100000],d,e,f,i,j,k,t,x;
    cin>>cas;
    for(x=1;x<=cas;x++)
    {
        cin>>e;
        for(i=0;i<e;i++)
        {
            cin>>a[i];
            f=a[i];
            cin>>c[f];
        }
        sort(a,a+e);
        double ans=0.0,l=0.0;
        for(i=0;i<e;i++)
        {
            t=a[i+1]-a[i];
            d=abs(c[a[i+1]]-c[a[i]]);
            l=(double)d/t;
            ans=max(l,ans);
        }
        printf("Case #%lld: %.2lf\n",x,ans);
    }

   return 0;
}  /*
   another process
int main()
{
    ll t,i,j,k,x,c,m,d;
    cin>>t;
    for(x=1;x<=t;x++)
    {
        cin>>c;
        vector <pair<ll, ll> > a;
        for(i=0;i<c;i++)
        {
            cin>>m>>d;
            a.push_back(make_pair(m,d));
        }
        sort(a.begin(),a.end());
        double ans=0.00;
        for(i=0;i<c;i++)
        {
            ll ttime=a[i+1].first-a[i].first;
            ll distanc=abs(a[i+1].second-a[i].second);
            double l=(double)distanc/ttime;
            ans=max(ans,l);
        }
        printf("Case #%lld: %.2lf\n",x,ans);
    }
   return 0;
}
 */
