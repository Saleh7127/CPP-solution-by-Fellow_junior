#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m=0,i,j,k,l,r,s=0;

   cin>>n;
   ll a[n+5],b[n+4];

   for(i=0;i<n;i++) cin>>a[i];
   for(i=0;i<n;i++) cin>>b[i];

   for(i=0;i<n;i++) s+=(a[i]*b[i]);

   for(i=0;i<n;i++)
   {
        l=i-1;
        r=i+1;
        k=s;

        while(l>=0 && r<n)
        {
             j=a[l]*b[l]+a[r]*b[r];
             k-=j;
             j=a[r]*b[l]+a[l]*b[r];
             k+=j;
             m=max(m,k);

             l--,r++;
        }
   }

   for(i=0;i<n;i++)
   {
        l=i;
        r=i+1;
        k=s;

        while(l>=0 && r<n)
        {
             j=a[l]*b[l]+a[r]*b[r];
             k-=j;
             j=a[r]*b[l]+a[l]*b[r];
             k+=j;
             m=max(m,k);
             l--,r++;
        }
   }

   cout<<m<<endl;

   return 0;
}
