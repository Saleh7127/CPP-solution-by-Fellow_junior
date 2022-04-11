/***
 created: 2021-12-29-22.58.31
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

        string a;

        cin>>n>>a;

        string b;

        if(n>1 && a[0]==a[1])
        {
             cout<<a[0]<<a[0]<<nl;
        }
        else
        {
             for(i=0;i<n-1;i++)
             {
                  if(a[i+1]>a[i]) break;
                  else
                  {
                       l=i+1;
                  }
             }

             for(i=0;i<=l;i++) cout<<a[i];
             for(i=l;i>=0;i--) cout<<a[i];

             cout<<nl;
        }
   }

   get_lost_idiot;
}

