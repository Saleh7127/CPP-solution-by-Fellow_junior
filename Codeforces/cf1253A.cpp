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
       ll n,k=0,l,i,j=0;
       cin>>n;
       ll a[n+5],b[n+5];

       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<n;i++)
       {
           cin>>b[i];
       }
       for(i=0;i<n;i++)
       {
           if(a[i]!=b[i])
           {
               k=i;
               break;
           }
       }
       for(i=n-1;i>0;i--)
       {
           if(a[i]!=b[i])
           {
               j=i;
               break;
           }
       }

       set<ll>xx;
       for(i=k;i<=j;i++)
       {
           xx.insert(b[i]-a[i]);
           if(b[i]-a[i]<0)
           {
               j=-100;
               break;
           }
       }
       if(xx.size()<=1 && j!=-100) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }


   return 0;
}
