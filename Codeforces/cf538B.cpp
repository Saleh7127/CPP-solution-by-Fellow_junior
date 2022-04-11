#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   cin>>n;

   vector<ll>x;

   while(n>0)
   {
       k=n;
       j=1;
       l=0;
       while(k)
       {
           if(k%10) l+=j;
           k/=10;
           j*=10;
       }
       x.push_back(l);
       n-=l;
   }
   cout<<x.size()<<endl;
   for(auto g:x)
   {
       cout<<g<<" ";
   }
   cout<<endl;

   return 0;
}
