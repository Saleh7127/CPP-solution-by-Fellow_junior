/***
 created: 2021-11-30-22.00.28
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

map<ll,ll>x;

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l,r;

   while(cin>>l>>r && (l+r))
   {
        if(l>r) swap(l,r);

        k=0;
        for(i=l;i<=r;i++)
        {
             if(x[i])
             {
                  if(x[i]>k)
                  {
                       k=x[i];
                       m=i;
                  }
             }
             else
             {
                  j=0;
                  n=i;
                  while(1)
                  {
                       if(n%2) n=3*n+1;
                       else n/=2;
                       j++;

                       if(n==1) break;
                  }
                  x[i]=j;
                  if(x[i]>k)
                  {
                       k=x[i];
                       m=i;
                  }
             }
        }
        cout<<"Between "<<l<<" and "<<r<<", "<<m<<" generates the longest sequence of "<<k<<" values."<<nl;
   }



   get_lost_idiot;
}
