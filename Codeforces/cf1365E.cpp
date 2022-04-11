#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1)
#define yes printf("YES\n");
#define no printf("NO\n");
int main()
{
   Faster
   ll n,a[1000],c,d=0,e,f,i,j,k,l;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           for(k=0;k<n;k++)
           {
               d=max(d,(a[i] | a[j] | a[k]));
           }
       }
   }
   cout<<d<<endl;
   return 0;
}
