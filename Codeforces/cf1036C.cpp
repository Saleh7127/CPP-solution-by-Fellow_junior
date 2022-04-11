/***
 created: 2022-02-07-23.13.26
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<ll>x;

void solve(ll p,ll c,ll num)
{
     if(p==18)
     {
          x.push_back(num);
          return;
     }

     solve(p+1,c,num*10);

     if(c<3)
     {
          for(ll i=1;i<=9;i++)
          {
               solve(p+1,c+1,i+num*10);
          }
     }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   solve(0,0,0);

   x.push_back(1e18);

   test
   {
        ll n,m,i,j,k,l,r;

        cin>>l>>r;

        k=upper_bound(x.begin(),x.end(),r)-lower_bound(x.begin(),x.end(),l);

     //   if(r==1e18) k++;

        cout<<k<<nl;

   }


   get_lost_idiot;
}

