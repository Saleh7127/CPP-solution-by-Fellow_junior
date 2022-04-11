#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,d=0,e,f,i,j=0,k,l;
   cin>>a;
   c=a;
   vector<ll>x;
   for(i=a;i>=0 && j<82;i--)
   {
       e=i;
       d=0;
       while(e)
       {
           d+=e%10;
           e/=10;
       }
       if(d+i==c)
       {
           x.push_back(i);
       }
       j++;
   }
   if(x.size()==0) cout<<0<<endl;
   else
   {
       sort(x.begin(),x.end());
       cout<<x.size()<<endl;
       for(i=0;i<x.size();i++)
       {
           cout<<x[i]<<endl;
       }
   }

   return 0;
}
