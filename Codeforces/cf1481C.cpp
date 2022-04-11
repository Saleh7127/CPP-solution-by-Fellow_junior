#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[100005],b[100005],c[100005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll n,m,i,j,k,l;
       cin>>n>>m;
       map<ll,ll>x;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<n;i++)
       {
           cin>>b[i];
       }
       for(i=0;i<m;i++)
       {
           cin>>c[i];
           x[c[i]]++;
       }
       k=0;
       for(i=0;i<n;i++)
       {
           if(a[i]!=b[i]) k++;
       }
       if(k>m)
       {
           cout<<"NO"<<endl;
           continue;
       }
       else
       {
           for(i=0;i<n;i++)
           {
               if(a[i]!=b[i])
               {

               }
           }
       }
   }


   return 0;
}
