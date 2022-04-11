/***
 created: 2022-01-31-20.35.00
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
        ll n,m=0,i,j,k=0,l=0;

        string a;

        cin>>a;

        for(i=0;a[i];i++)
        {
             if(a[i]=='0') k++;
             else l++;


             if(k && l)
             {
                  if(k!=l)
                  {
                       m=max(m,min(k,l));
                  }
             }
        }

        cout<<m<<nl;

   }


   get_lost_idiot;
}

