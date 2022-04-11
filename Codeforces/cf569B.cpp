#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a[100005],c[100005]={0},d,e,f=1,i,j,k,l;

   cin>>d;
   for(i=0;i<d;i++)
   {
       cin>>a[i];
       c[a[i]]++;
   }
   for(i=0;i<d;i++)
   {
       if(c[a[i]]==1 && a[i]<=d)
       {
           cout<<a[i]<<" ";
       }
       else
       {
           while(c[f])
           {
               f++;
           }
           cout<<f<<" ";
           c[f]++;
           c[a[i]]--;
       }
   }
   cout<<endl;
   return 0;
}
