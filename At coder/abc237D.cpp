/***
 created: 2022-01-30-18.31.49
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

   deque<ll>y;

   vector<ll>x;

   ll n,m,i,j,k,l;

   string a;

   cin>>n;
   cin>>a;

   x.push_back(0);

   for(i=0;i<n;i++)
   {
        if(a[i]=='L')
        {
             if(x.size())
             {
                  k=x.back();
                  x.pop_back();
                  y.push_front(k);
                  x.push_back(i+1);
             }
             else
             {
                  y.push_front(i+1);
             }
        }
        else
        {
             x.push_back(i+1);
        }
   }

   for(auto d:x) cout<<d<<" ";
   for(auto d:y) cout<<d<<" ";

   cout<<nl;


   get_lost_idiot;
}

