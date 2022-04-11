#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 10000008
bool marked[maX+2];
ll p[maX+2];
ll c[maX+2];
void sieve()
{
    for(ll i=2; i<=maX; i++)
    {
        if(marked[i]==0)
        {
            for(ll j=i; j<=maX; j+=i)
            {
                marked[j]=1;
                p[i]+=1ll*c[j];
            }
        }
        p[i]+=p[i-1];
    }
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   cin>>n;
   for(i=0;i<n;i++)
   {
        cin>>m;
        c[m]++;
   }
   sieve();

   cin>>m;

   while(m--)
   {
        cin>>k>>l;

        k=min(k,10000000ll);
        l=min(l,10000000ll);

        cout<<p[l]-p[k-1]<<endl;
   }

   return 0;
}
