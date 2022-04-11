#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j=0,k,l=0;

        cin>>n;

        ll a[n+4],b[n+4];

        for(i=0;i<n;i++) cin>>a[i];

        b[0]=0;

        sort(a,a+n);

        for(i=1;i<n;i++)
        {
             b[i]=b[i-1]+a[i];
        }

        for(i=2;i<n;i++)
        {
             k=(a[i]*++j)-b[i-2];
             l+=k;
        }

        cout<<-l<<endl;
   }

   return 0;
}
