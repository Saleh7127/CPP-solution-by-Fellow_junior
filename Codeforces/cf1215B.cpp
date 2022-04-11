#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[200005],p[200005],n[200005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll m,i,j,k=0,l=0;

   cin>>m;

   for(i=1;i<=m;i++) cin>>a[i];

   for(i=1;i<=m;i++)
   {
        if(a[i]>0ll)
        {
             p[i]=p[i-1]+1;
             n[i]=n[i-1];
        }
        else
        {
             p[i]=n[i-1];
             n[i]=p[i-1]+1;
        }
   }

   for(i=1;i<=m;i++)
   {
        k+=n[i];
        l+=p[i];
   }

   cout<<k<<" "<<l<<endl;

   return 0;
}
