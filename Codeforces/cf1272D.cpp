#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

ll l[200005],r[200005];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k=1;

   cin>>n;

   ll a[n+4];

   for(i=0;i<n;i++)
   {
        cin>>a[i];
        l[i]=r[i]=1;
   }

   for(i=1;i<n;i++)
   {
        if(a[i]>a[i-1])
        {
             l[i]=l[i-1]+1;
        }
        k=max(k,l[i]);
   }

   for(i=n-2;i>=0;i--)
   {
        if(a[i]<a[i+1])
        {
             r[i]=r[i+1]+1;
        }
        k=max(k,r[i]);
   }

   for(i=0;i<n-2;i++)
   {
       if(a[i]<a[i+2]) k=max(k,l[i]+r[i+2]);
   }

   cout<<k<<endl;

   return 0;
}
