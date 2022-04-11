#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {

       ll n,m,i,j,k,l;

       cin>>n;

       ll a[n+4];

       map<ll,ll>x;

       l=0;
       for(i=1;i<=n;i++)
       {
           cin>>m;
           l+=(x[m-i]);
           x[m-i]++;
       }
       cout<<l<<endl;

   }

   return 0;
}

