#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll dsum(ll x,ll y)
{
     ll r=0;
     while(x)
     {
          r+=(x%y);
          x/=y;
     }
     return r;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   cin>>n;

   l=0;

   for(i=2;i<=n-1;i++)
   {
        l+=dsum(n,i);
   }

   cout<<l/__gcd(l,n-2)<<"/"<<(n-2)/__gcd(l,n-2)<<endl;

   return 0;
}
