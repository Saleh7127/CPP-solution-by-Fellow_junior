#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        double m,k,l=0.0;

        ll n,i;

        cin>>n;

        double a[n+4];

        for(i=0;i<n;i++)
        {
             cin>>a[i];
             l+=a[i];
        }

        sort(a,a+n);

        k=a[n-1];

        l-=k;

        k=k+(l/(n-1));

        cout<<fixed<<setprecision(10)<<k<<endl;
   }


   return 0;
}
