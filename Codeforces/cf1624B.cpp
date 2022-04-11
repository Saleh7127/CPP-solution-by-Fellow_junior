/***
 created: 2022-01-10-20.28.22
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

bool chk(ll a,ll b,ll c)
{
     if((b-a)==(c-b)) return 1;

     if( a-b == b-c ) return 1;

     return 0;
}

ll solve(ll a,ll b,ll c)
{
      ll x,y,z,s=0;

      z=(a+c)/2;

      if(z%b==0 && z/b>0 && chk(a,z,c)) s=1;

      z=(b-a);

      x=b+z;

      if(x%c==0 && x/c>0 && chk(a,b,x) && z>=0) s=1;

      z=(c-b);

      x=(b-z);

      if(x%a==0 && x/a>0 &&  chk(x,b,c) && z>=0) s=1;

      z=(a-b);

      x=b-z;

      if(x%c==0 && x/c>0 && chk(a,b,x) && z>=0) s=1;

      z=(b-c);

      x=(b+z);

      if(x%a==0 && x/a>0 &&  chk(x,b,c) && z>=0) s=1;

      return s;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll a,b,c,x,y,z;

        cin>>a>>b>>c;

        //cout<<solve(a,b,c)<<nl;

        if(solve(a,b,c)==1) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

   }



   get_lost_idiot;
}

