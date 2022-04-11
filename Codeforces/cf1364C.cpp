#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll a[200008],b[200008];
bool v[200008];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   cin>>n;

   memset(b,-1,sizeof b);

   for(i=1;i<=n;i++) cin>>a[i];

   for(i=1;i<=n;i++)
   {
        if(a[i]!=a[i-1])
        {
             b[i]=a[i-1];
             v[b[i]]=1;
        }
   }

   v[a[n]]=1;
   j=0;

   for(i=1;i<=n;i++)
   {

        while(v[j]) j++;

        if(b[i]==-1)
        {
             b[i]=j;
             v[j]=1;
        }

        cout<<b[i]<<" ";
   }

   cout<<"\n";

   return 0;
}
