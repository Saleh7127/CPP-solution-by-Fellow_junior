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
   int i,t;
   double a,c,r,s,xx,theta;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%lf : %lf",&a,&c);
       r = sqrt(a*a+c*c)/2.0;
       theta = acos((r*r + r*r - c*c)/(2.0*r*r));
       s = r*theta;
       xx = 400.0/(2.0*a+2.0*s);
       printf("Case %d: %.7lf %.7lf\n",i, a*xx, c*xx);
   }
   return 0;
}
