#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define pf(a) printf("%lld",a)
#define loop1(i,a,c) for(i=a;i<=c;i++)
#define loop(i,c) for(i=0;i<c;i++)
ll a[100005]={0};
int main()
{
   ll i,j,k,l,e,f;
   for(i=1;i<=100000;i++)
   {
       ll num=i+(i/10000)+(i/1000)%10+(i/100)%10+(i/10)%10+i%10;
       if(a[num]==0 || i<a[num])
       {
           a[num]=i;
       }
   }
   cin>>e;
   for(j=0;j<e;j++)
   {
       cin>>f;
       cout<<a[f]<<endl;
   }
   return 0;
}
