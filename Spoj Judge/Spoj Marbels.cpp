#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

ll nCr(ll n,ll r)
{
     ll x,y,a;

     if(r>n-r) r=n-r;

     x=1;

     for(ll i=0;i<r;i++)
     {
          x=x*(n-i)/(i+1);
     }

     return x;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m;

        cin>>n>>m;

        n--,m--;

        cout<<nCr(n,m)<<endl;
   }


   return 0;
}
