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
       ll a[200005],c,d,e,f,i,j,k,l;

       cin>>c;
       for(i=1;i<=c;i++)
       {
           cin>>d;
           a[d]=i;
       }
       k=0;
       l=c;

       string x="";
       for(i=1;i<=c;i++)
       {
           k=max(k,a[i]);
           l=min(l,a[i]);
           if(k-l+1==i)
           {
               x+='1';
           }
           else x+='0';
       }
       cout<<x<<endl;
   }


   return 0;
}
