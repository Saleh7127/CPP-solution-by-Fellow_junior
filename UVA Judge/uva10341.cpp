#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ep 1e-7
double p,q,r,s,t,u;
double fun(double x)
{
    return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}
double findvlu()
{
    double mid;
    double lo=0.0,hi=1.0;
    while(lo+ep<hi)
    {
        mid=(lo+hi)/2.0;
        double ans=fun(mid);
        if(ans>0)
        {
            lo=mid;
        }
        else hi=mid;
    }
    return mid;
}
int main()
{
   Faster
   while(cin>>p>>q>>r>>s>>t>>u)
   {
       if(fun(0)*fun(1)>0)
       {
           printf("No solution\n");
       }
       else
       {
           printf("%.4lf\n",findvlu());
       }
   }
   return 0;
}
