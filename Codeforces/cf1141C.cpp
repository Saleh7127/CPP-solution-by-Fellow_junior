#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

ll a[200005],b[200004];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l=1e17;

   cin>>n;

   for(i=2;i<=n;i++)
   {
        cin>>a[i];
        a[i]=a[i-1]+a[i];
        l=min(l,a[i]);
   }

   if(l<0) l=-l+1;

   for(i=1;i<=n;i++)
   {
        a[i]+=l;
        b[i]=a[i];
   }

   sort(b+1,b+n+1);

   for(i=1;i<=n;i++)
   {
        if(b[i]!=i)
        {
             cout<<-1<<endl;
             return 0;
        }
   }

   for(i=1;i<=n;i++)
   {
        cout<<a[i]<<" ";
   }

   cout<<endl;


   return 0;
}
