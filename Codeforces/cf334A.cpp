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
   k=n;
   l=n*n;
   m=1;
   for(i=1;i<=k;i++)
   {
        for(j=1;j<=k/2;j++)
        {
             cout<<m<<" ";
             m++;
        }
        for(j=1;j<=k/2;j++)
        {
             cout<<l<<" ";
             l--;
        }
        cout<<endl;
   }

   return 0;
}
