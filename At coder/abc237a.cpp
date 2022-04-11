/***
 created: 2022-01-30-18.00.24
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

   ll n,m,i,j,k,l;


   cin>>n;

   l=-1*(1<<31);
   k=(1<<31)-1;

   if(n>=l && n<=k) cout<<"Yes"<<nl;
   else cout<<"No"<<nl;

   get_lost_idiot;
}

