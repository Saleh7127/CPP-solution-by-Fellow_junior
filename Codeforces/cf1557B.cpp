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
        ll n,m,i,j,k,l=1;

        cin>>n>>k;

        ll a[n+4];

        map<ll,ll>x;

        for(i=0;i<n;i++)
        {
             cin>>a[i];
             x[a[i]]=i;
        }

        sort(a,a+n);

        for(i=0;i<n-1;i++)
        {
             if(x[a[i]]+1!=x[a[i+1]]) l++;
        }

        if(l<=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }


   return 0;
}
