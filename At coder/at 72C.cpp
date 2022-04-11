#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   map<ll,ll>a;
   map<ll,ll>::iterator it;
   ll c,d,e,f,i,j=0,k,l;

   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>d;
       a[d]++;
       a[d-1]++;
       a[d+1]++;
   }
   for(it=a.begin();it!=a.end();it++)
   {
       j=max(j,it->second);
   }
   cout<<j<<endl;
   return 0;
}
