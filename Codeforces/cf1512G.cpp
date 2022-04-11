#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[10000007],sod[10000007];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,i,j,k,l;

   memset(a,-1, sizeof a);

   for(i=1;i<10000007;i++)
   {
       for(j=i;j<10000007;j+=i)
       {
           sod[j]+=i;
       }
   }
   for(i=1;i<10000007;i++)
   {
       if(sod[i]<10000007 && a[sod[i]]==-1)
       {
           a[sod[i]]=i;
       }
   }

   test
   {
       cin>>n;
       cout<<a[n]<<endl;
   }

   return 0;
}
