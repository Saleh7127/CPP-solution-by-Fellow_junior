#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,b,c=0,d=0,e,i,j,k,l;

   cin>>a;

   vector<ll>x,y;
   b=(a*(a+1))/4;

   for(i=a;i>=1;i--)
   {
       if(b-i>=0)
       {
           x.push_back(i);
           b-=i;
           c+=i;
       }
       else
       {
           y.push_back(i);
           d+=i;
       }
   }
   cout<<abs(c-d)<<endl;

   cout<<x.size()<<" ";
   for(i=0;i<x.size();i++)
   {
       cout<<x[i]<< " ";
   }

   cout<<endl;
   return 0;
}
