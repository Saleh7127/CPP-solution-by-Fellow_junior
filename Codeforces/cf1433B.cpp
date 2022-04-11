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
       ll a[100000],c,d,e,f,i,j=0,k=10000000,l=0;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
           if(a[i]==1)
           {
               j=max(i,j);
               k=min(k,i);
           }
       }
       for(i=k;i<=j;i++)
       {
           if(a[i]==0)
           {
               l++;
           }
       }
       cout<<l<<endl;
   }



   return 0;
}
