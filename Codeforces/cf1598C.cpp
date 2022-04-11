#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m=0,i,j,k,l=0,ans=0;;

        cin>>n;

        map<ll,ll>x;

        ll a[n+4];

        for(i=0;i<n;i++)
        {
             cin>>a[i];
             l+=a[i];
        }

        if((l*2)%n!=0) ans=0;

        else
        {
             l=(l*2)/n;

             for(i=0;i<n;i++)
             {
                  k=l-a[i];
                  ans+=x[k];
                  x[a[i]]++;
             }
        }

        cout<<ans<<endl;
   }

   return 0;
}

