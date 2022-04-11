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
       string a;
       ll n,q,i,j,k,l,r,b,c,d=0;
       cin>>n>>q>>a;
       while(q--)
       {
           cin>>l>>r;
           char x,y;
           x=a[l-1];
           y=a[r-1];
           d=0;
           for(i=0;i<l-1;i++)
           {
               if(a[i]==x)
               {
                   d=1;
                   break;
               }
           }
           for(i=r;i<n;i++)
           {
               if(a[i]==y)
               {
                   d=1;
                   break;
               }
           }
           if(d==1) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
   }
   return 0;
}
