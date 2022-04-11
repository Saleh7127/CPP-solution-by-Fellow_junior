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
       cin>>n>>m;
       ll x[200005];
       for(i=1;i<=n;i++)
       {
           cin>>k;
           x[k]=i;
       }
       l=j=0;
       for(i=1;i<=m;i++)
       {
           cin>>k;
           if(x[k]<j)
           {
               l++;
           }
           else
           {
               l+=(x[k]-i)*2+1;
               j=x[k];
           }
       }
       cout<<l<<endl;
   }


   return 0;
}
