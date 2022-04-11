#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   set<ll>c;
   set<ll>::iterator it;
   ll a[10000]={0},d,e,f,i,j,k,l=0;
   cin>>d;
   while(d--)
   {
       cin>>e;
       a[e]=1;
       cin>>f;
       while(f--)
       {
           cin>>k;
           c.insert(k);
       }
   }
   for(it=c.begin();it!=c.end();it++)
   {
       if(a[*it]==0)
       {
           l++;
       }
   }
   cout<<l<<endl;
   return 0;
}
