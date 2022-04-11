/***
 created: 2021-10-24-21.58.37
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,m,i,j,k,l;

        cin>>n;

        k=l=0;

        while(n--)
        {
             cin>>m;
             if(m==1) k++;
             if(m==0) l++;
        }

        m=k*(1ll<<l);

        cout<<m<<nl;
   }


   get_lost_idiot;
}
