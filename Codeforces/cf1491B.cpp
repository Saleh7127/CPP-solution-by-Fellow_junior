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
       ll a[1000],b,c,d,n,m,i,j,k,l=1e9;
       cin>>n>>b>>c;

       for(i=1;i<=n;i++)
       {
           cin>>a[i];
       }
       for(i=1;i<n;i++)
       {
           if(abs(a[i]-a[i+1])>1)
           {
               l=0;
               break;
           }
       }
       if(l==0) cout<<0<<endl;
       else
       {
           sort(a+1,a+n+1);
           if(a[1]==a[n])
           {
               cout<<min(b+c,2*c)<<endl;
           }
           else cout<<min(b,c)<<endl;
       }
   }


   return 0;
}
