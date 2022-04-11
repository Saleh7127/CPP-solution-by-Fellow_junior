/***
 created: 2021-11-25-20.32.11
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
        string a;

        ll n,m,i,j,k,l=-1;

        cin>>a;

        for(i=0;i<a.size()-1;i++)
        {
             if((a[i]-'0')%2==0)
             {
                  l=2;
                  break;
             }
        }

        if((a[a.size()-1]-'0')%2==0) cout<<0<<nl;
        else
        {
              if((a[0]-'0')%2==0) cout<<1<<nl;
              else cout<<l<<nl;
        }
   }


   get_lost_idiot;
}

