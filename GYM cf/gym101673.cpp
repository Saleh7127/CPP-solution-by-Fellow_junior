#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l,b=0,c=0;
   string a,x;

   cin>>a;

   k=a.size();
   l=k/2;

   for(i=0;i<l;i++)
   {
        a[i]-=65;
        b+=a[i];
        b%=26;
   }

   for(i=l;i<k;i++)
   {
        a[i]-=65;
        c+=a[i];
        c%=26;
   }

   for(i=0;i<l;i++)
   {
        a[i]+=b;
        a[i]%=26;
   }

   for(i=l;i<k;i++)
   {
        a[i]+=c;
        a[i]%=26;
   }

   for(i=0;i<l;i++)
   {
        x+=((a[i]+a[i+l])%26+65);
   }

   cout<<x<<endl;

   return 0;
}
