/***
 created: 2021-10-30-20.55.52
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
        ll n,m,i,j,k=0,l=1;

        cin>>n;

        ll a[n+4];

        for(i=0;i<n;i++)
        {
             cin>>a[i];
        }

        for(i=0;i<n;i++)
        {
             if(a[i]>l)
             {
                  m=a[i]-l;
                  l+=m;
                  k+=m;
             }
             l++;
        }

        cout<<k<<endl;
   }


   get_lost_idiot;
}

