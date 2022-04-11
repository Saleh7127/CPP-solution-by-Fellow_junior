#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,n,c,d,e,f,i,j,l;
   cin>>n;
   cin>>c;

   d=c,e=c;

   vector<ll>x;

   x.push_back(1);

   for(i=2;i<=n;i++)
   {
       cin>>a;
       if((2*a)<=c)
       {
           x.push_back(i);
           d+=a;
       }
       e+=a;
   }
   if(2*d<=e) cout<<0<<endl;
   else
   {
       cout<<x.size()<<endl;
       for(auto z:x)
       {
           cout<<z<<" ";
       }
   }

   return 0;
}
