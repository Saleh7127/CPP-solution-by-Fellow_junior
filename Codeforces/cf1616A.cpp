/***
 created: 2021-12-29-21.32.32
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
        ll n,m,i,j,k,l=0;

        cin>>n;

        ll a[n+4];

        map<ll,ll>x;

        for(i=0;i<n;i++)
        {
             cin>>a[i];
             a[i]=abs(a[i]);
             x[a[i]]++;
        }

        for(i=0;i<101;i++)
        {
             if(i==0 && x[i]) l++;
             else
             {
                  if(x[i]>1) l+=2;
                  else if(x[i]==1) l++;
             }
        }

        cout<<l<<nl;
   }


   get_lost_idiot;
}

