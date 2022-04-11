#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   cin>>n;

   ll a[n+4];
   for(i=0;i<n;i++)
   {
        cin>>a[i];

   }
   sort(a,a+n);

   if(a[0]==a[n-1]) cout<<"NO"<<endl;
   else
   {
        for(i=1;i<n;i++)
        {
             if(a[i]!=a[i-1])
             {
                  cout<<a[i]<<endl;
                  break;
             }
        }
   }

   return 0;
}
