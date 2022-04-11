#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,c,d,e,f,i,j,l;

   cin>>n;

   ll a[2*n+5];

   if(n%2==0)
   {
       cout<<"NO"<<endl;
       return 0;
   }
   c=0;
   d=1;
   for(i=0;i<n;i++)
   {
       if(!c)
       {
           a[i]=d;
           a[i+n]=d+1;
       }
       else
       {
           a[i+n]=d;
           a[i]=d+1;
       }
       c=1-c;
       d+=2;
   }
   cout<<"YES"<<endl;
   for(i=0;i<2*n;i++)
   {
       cout<<a[i]<<" ";
   }
   return 0;
}
