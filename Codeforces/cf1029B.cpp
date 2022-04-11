#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   ll a[200000],c,d=0,e,f,i,j,k,l;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<c;i++)
   {
       j=i;
       while(j+1<c && a[j+1]<=a[j]*2)
       {
           j++;
       }
       d=max(d,j-i+1);
       i=j;
   }
   cout<<d<<endl;
   return 0;
}
