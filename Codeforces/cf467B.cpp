#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define pf(a) printf("%lld",a)
#define loop1(i,a,c) for(i=a;i<=c;i++)
#define loop(i,c) for(i=0;i<c;i++)
int main()
{
   ll a[10000],c,d,e,i,j=0,k,n,m;
   cin>>n>>m>>k;
   for(i=0;i<m;i++)
   {
       cin>>a[i];
   }
   cin>>c;
   for(i=0;i<m;i++)
   {
       d=c^a[i];
       e=__builtin_popcountll(d);
       if(e<=k) j++;
   }
   cout<<j<<endl;
   return 0;
}
