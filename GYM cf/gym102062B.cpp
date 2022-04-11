#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define pi acos(-1.0)

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        double m,d,v,r,ans;

        cin>>m>>d;

        v=m/d;

        r=cbrt((3.0*v)/(4.0*pi));

        ans=4.0*pi*r*r;

        cout<<"Case "<<cs<<": "<<fixed<<setprecision(4)<<ans<<endl;
   }

   return 0;
}
