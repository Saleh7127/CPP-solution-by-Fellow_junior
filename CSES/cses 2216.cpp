#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m=1,i,j,k;

   cin>>n;

   ll a[n+2]={0};

   for(i=0;i<n;i++)
   {
       cin>>k;
       a[k]=i+1;
   }
   j=1;
   for(i=1;i<=n;i++)
   {
       if(m>a[i]) j++;
       m=a[i];
   }
   cout<<j<<endl;
   return 0;
}
