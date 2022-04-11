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

       ll n,m,i,j,k=-1,l=1e9+7;

       map<ll,ll>x;

       cin>>n;

       x.clear();

       for(i=0;i<n;i++)
       {
           cin>>j;
           x[j]++;
           if(k==-1) k=j;
           else k=k&j;
       }

       if(x[k]==0) cout<<0<<endl;

       else
       {
           m=x[k]*(x[k]-1);

           m%=l;

           for(i=1;i<=n-2;i++)
           {
               m*=i;
               m%=l;
           }

           cout<<m<<endl;
       }
   }


   return 0;
}
