#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l=1;

   vector<ll>x;

   cin>>n;

   for(i=1;i<=n-2;i++)
   {
       k=__gcd(n,i);
       if(k==1)
       {
           l=(l*i)%n;
           x.push_back(i);
       }
   }
   l=(l*(n-1))%n;

   if(l==1)
   {
       x.push_back(n-1);
   }

   cout<<x.size()<<endl;

   for(auto r:x)
   {
       cout<<r<<" ";
   }
   cout<<endl;

   return 0;
}

