#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

double l,w;

double area(double x)
{
     return (l-2*x)*(w-2*x)*x;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        cin>>l>>w;

        double lo,hi,m1,m2,ans=0.0,ans1,ans2;

        lo=0.0;
        hi=min(l,w)/2.0;

        while(lo<hi)
        {
             m1=lo+(hi-lo)/3.0;
             m2=hi-(hi-lo)/3.0;

             ans1=area(m1);
             ans2=area(m2);

             ans=max(ans,max(ans1,ans2));

             if(ans2>=ans1)
             {
                  lo=m1+0.000001;
             }
             else hi=m2-0.000001;
        }

        cout<<"Case "<<cs<<": "<<fixed<<setprecision(12)<<ans<<endl;

   }


   return 0;
}
