#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll d,e,f,n,num,i,j,base,l;
   string a,b;

   while(cin>>n &&n)
   {
       cin>>a>>b;
       l=b.size();
       num=0;
       base=1;
       for(i=l-1;i>=0;i--)
       {
           num+=(b[i]-'0')*base;
           base*=n;
       }
       base=0;
       for(i=0;i<a.size();i++)
       {
           base=(a[i]-'0')+(base*n);
           base%=num;
       }
       ll ans[1000],j=-1;
       while(base)
       {
           ans[++j]=base%n;
           base/=n;
       }
       for(i=j;i>=0;i--)
       {
           cout<<ans[i];
       }
       if(j==-1) cout<<0;
       cout<<endl;
   }

   return 0;
}
