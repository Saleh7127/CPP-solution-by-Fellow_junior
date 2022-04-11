/***
 created: 2021-10-29-23.49.40
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
        ll n,m=1,i,j,k,l=0,tar=1;

        cin>>n>>k;

        while(m<n)
        {
             m+=tar;
             l++;
             tar=m;
             if(tar>k)
             {
                  n-=tar;
                  if(n<=0)break;

                  else
                  {
                       l+=(1+(n-1)/k);
                       break;
                  }
             }
        }

        cout<<l<<endl;

   }


   get_lost_idiot;
}
