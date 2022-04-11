#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define pf(a) printf("%lld",a)
#define pi acos(-1)
#define loop1(i,a,c) for(i=a;i<=c;i++)
#define loop(i,c) for(i=0;i<c;i++)
int main()
{
   double a,ans,theta;
   test
   {
       cin>>a;
       theta=pi/(2*a);
       ans=1/tan(theta);
       printf("%.10lf\n",ans);
   }
   return 0;
}
