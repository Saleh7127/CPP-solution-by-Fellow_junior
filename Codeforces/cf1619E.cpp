/***
 created: 2022-01-20-16.37.36
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
       ll n,m,i,j,k=0,l;

       cin>>n;

       map<ll,ll>x;
       multiset<ll>s;

       for(i=0;i<n;i++)
       {
            cin>>m;
            x[m]++;
       }

       for(i=0;i<=n;i++)
       {
            l=k+x[i];
            if(l<0)
            {
                 cout<<-1<<" ";
                 continue;
            }
            else cout<<l<<" ";

            if(x[i]==0)
            {
                 if(s.size()==0)
                 {
                      k=-1e17;
                 }
                 else
                 {
                      k+=(i-(*--s.end()));
                      s.erase(--s.end());
                 }
            }

            for(j=1;j<x[i];j++)
            {
                 s.insert(i);
            }
       }
       cout<<nl;
   }


   get_lost_idiot;
}
