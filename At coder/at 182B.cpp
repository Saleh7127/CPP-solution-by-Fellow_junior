#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a[12000],c,d,e,f,i,j,k=0,l=0;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }

   for(i=2;i<=1000;i++)
   {
       l=0;
       for(j=0;j<c;j++)
       {
           if(a[j]%i==0)
           {
               l++;
           }
       }
       if(l>k)
       {
           k=l;
           e=i;
       }
   }
   cout<<e<<endl;
   return 0;
}
