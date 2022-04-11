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


       set<ll>x,y;

       ll n,i,j,k,l;
       cin>>n;

       ll a[n+5],b[n+5];
       ll c[n+5];

       a[0]=0;
       for(i=1;i<=n;i++)
       {
           cin>>a[i];
           if(a[i-1]<a[i])
           {
               for(j=a[i-1]+1;j<a[i];j++)
               {
                   x.insert(j);
                   y.insert(j);
               }
               b[i]=c[i]=a[i];
           }
           else
           {
               auto ss=x.begin();
               b[i]=*ss;
               x.erase(ss);
               auto dd=y.end();
               dd--;
               c[i]=*dd;
               y.erase(dd);
           }
       }
       for(i=1;i<=n;i++)
       {
           cout<<b[i]<<" ";
       }
       cout<<endl;
       for(i=1;i<=n;i++)
       {
           cout<<c[i]<<" ";
       }
       cout<<endl;
   }


   return 0;
}
