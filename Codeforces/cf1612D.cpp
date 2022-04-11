/***
 created: 2021-11-22-23.23.32
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll cal(ll a,ll b,ll x)
{
     if(a>b) swap(a,b);

     while(a>0)
     {
          if(x==a || x==b) return 1;
          if(x>a && x<b && x%a==b%a) return 1;
          b%=a;

          if(a>b) swap(a,b);
     }

     return 0;
}

int main()
{

   test
   {
        ll x,n,m,i,j,k,l,a,b;

        cin>>a>>b>>x;

        if(cal(a,b,x)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }

   get_lost_idiot;

}


