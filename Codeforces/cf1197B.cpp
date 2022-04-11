#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a[200005],b,c,d,e,f,i,j,k,l;
   cin>>b;
   for(i=1;i<=b;i++)
   {
       cin>>a[i];
       if(a[i]==b)
       {
           c=i;
       }
   }
   for(i=c-1;i>=1;i--)
   {
       if(a[i]>a[i+1])
       {
           cout<<"NO"<<endl;
           return 0;
       }
   }
   for(i=c+1;i<=b;i++)
   {
       if(a[i]>a[i-1])
       {
           cout<<"NO"<<endl;
           return 0;
       }
   }
   cout<<"YES"<<endl;
   return 0;
}
