/***
 created: 2021-10-25-22.44.06
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
        string a,b;

        cin>>a;

        b=a;

        sort(a.begin(),a.end());

        ll j=0;

        for(ll i=0;i<a.size();i++)
        {
             if(j==0 && b[i]==a[0])
             {
                  j=1;
                  cout<<a[0]<<" ";
             }
        }
        j=0;

        for(ll i=0;i<a.size();i++)
        {
             if(j==0 && b[i]==a[0])
             {
                  j=1;
             }
             else cout<<b[i];
        }
        cout<<nl;
   }


   get_lost_idiot;
}
