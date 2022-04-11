#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[200000],n;

ll check(ll x)
{
    ll i,j=0;

    for(i=n/2;i<n;i++)
    {
        j=j+max(0ll,x-a[i]);
    }

    return j;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll m,i,j,k,l,h;

   cin>>n>>k;


   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }

   sort(a,a+n);

   j=a[n/2];
   l=j;
   h=j+k;

   while(l<=h)
   {
       ll mid=(l+h)/2;

       if(check(mid)<=k)
       {
           j=max(j,mid);
           l=mid+1;
       }
       else h=mid-1;

   }

   cout<<j<<endl;

   return 0;
}
