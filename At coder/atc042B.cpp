#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,l,i,j,k;
   string a[1000];
   cin>>n>>l;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   for(i=0;i<n;i++)
   {
       cout<<a[i];
   }
   cout<<endl;
   return 0;
}
