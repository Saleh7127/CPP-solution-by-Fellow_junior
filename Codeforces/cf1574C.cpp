#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k=0,l=0,c,d,x,y;

   cin>>n;

   ll a[n+4];

   for(i=0;i<n;i++)
   {
        cin>>a[i];
        l+=a[i];
   }

   sort(a,a+n);

   cin>>m;

   while(m--)
   {
        cin>>c>>d;

        k=lower_bound(a,a+n,c)-a;

        y=x=l;

        ll ans=0,an=0;

        if(a[n-1]>=c)
        {
            x-=a[k];
        }
        else
        {
             an+=c-a[n-1];
             x-=a[n-1];
        }

        an+=max(0ll,d-x);

        if(k>0)
        {
             ans+= c-a[k-1];
             y-=a[k-1];
        }
        else y-=a[k];

        ans+=max(0ll,d-y);

        cout<<min(an,ans)<<"\n";


   }

   return 0;
}

