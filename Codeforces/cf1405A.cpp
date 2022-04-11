#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
   test
   {
       ll a[10000],c,d[10000],e,f,i,j,k=0,l;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       for(i=c-1;i>=0;i--)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
   }

   return 0;
}
