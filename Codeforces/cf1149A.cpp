#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   ll a[200005],c,d=0,e=0,f,i,j,k;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
       if(a[i]==1) d++;
       else e++;
   }
   if(e) cout<<2<<" ";
   if(d) cout<<1<< " ";
   for(i=0;i<e-1;i++)
   {
       cout<<2<<" ";
   }
   for(i=0;i<d-1;i++)
   {
       cout<<1<<" ";
   }
   return 0;
}
