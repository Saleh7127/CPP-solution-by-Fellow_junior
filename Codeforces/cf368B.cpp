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
   int n,m,a[200000],c[200000],d,e,f,i,j,k,l;
   cin>>n>>m;
   for(i=1;i<=n;i++)
   {
       cin>>a[i];
   }
   set<int>x;
   for(i=n;i>=1;i--)
   {
       x.insert(a[i]);
       c[i]=x.size();
   }
   while(m--)
   {
       cin>>e;
       cout<<c[e]<<endl;
   }

   return 0;
}
