#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       vector<ll>x,y;

       ll n,m,i,j,k,l;
       cin>>n;
       for(i=0;i<2*n;i++)
       {
           ll a,b;
           cin>>a>>b;
           if(a==0) y.push_back(abs(b));
           if(b==0) x.push_back(abs(a));
       }

       sort(x.begin(),x.end());
       sort(y.begin(),y.end());

       double ans=0.0;
       for(i=0;i<n;i++)
       {
           double xx=sqrt((double)(x[i]*x[i]) + (double)(y[i]*y[i]));
           ans+=xx;
       }
       cout<<fixed<<setprecision(15)<<ans<<endl;
   }


   return 0;
}
