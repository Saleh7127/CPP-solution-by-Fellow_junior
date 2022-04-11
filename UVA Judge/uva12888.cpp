/***
 created: 2022-02-08-22.35.22
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll mob[1000005];
bitset<1000005>marked;

void mobious()
{
     ll i,j,k,l;

     for(i=0;i<1000002;i++)
     {
          mob[i]=1;
     }

     for(i=2;i<1000002;i++)
     {
          if(marked[i]==0)
          {
               mob[i]*=-1;

               for(j=i+i;j<1000002;j+=i)
               {
                    marked[j]=1;

                    if(j%(i*i)==0) mob[j]=0;
                    else mob[j]*=-1;
               }
          }
     }
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   mobious();

   test
   {
        ll n,m,i,j,k,l;

        cin>>n>>m;

        if(n>m) swap(n,m);

        l=n*m;

        for(i=2;i<=n;i++)
        {
             l+=mob[i]*(n/i)*(m/i);
        }
        cout<<l<<nl;
   }



   get_lost_idiot;
}

