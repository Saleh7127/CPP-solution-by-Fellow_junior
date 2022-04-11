#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll c,d,e,f,i,j,k,l=-100;
   cin>>c;
   pair<ll,ll>a[c];
   for(i=0;i<c;i++)
   {
       cin>>a[i].first>>a[i].second;
   }
   sort(a,a+c);
   for(i=0;i<c;i++)
   {
       if(l<=a[i].second)
       {
           l=a[i].second;
       }
       else l=a[i].first;
   }
   cout<<l<<endl;
   return 0;
}
