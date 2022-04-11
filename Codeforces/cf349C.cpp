#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k=0,l=0;

   cin>>n;

   for(i=0;i<n;i++)
   {
        cin>>m;
        l=max(l,m);
        k+=m;
   }

   j=k/(n-1);

   if(k%(n-1)) j++;

   cout<<max(j,l)<<endl;


   return 0;
}
