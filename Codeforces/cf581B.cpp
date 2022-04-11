#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   int a[200000]={0},c[200000]={0},d,e,f,i,j,k,l;
   cin>>d;
   for(i=0;i<d;i++)
   {
       cin>>a[i];
   }
   for(i=d-1;i>=0;i--)
   {
       c[i]=max(c[i+1],a[i+1]);
   }
   for(i=0;i<d;i++)
   {
       cout<<max(0,(c[i]-a[i]+1))<<" ";
   }
   return 0;
}
