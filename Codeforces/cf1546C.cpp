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
        ll n,m,i,j,k,l=0;

        cin>>n;

        ll a[n+4];
        ll b[100005][2];

        memset(b,0,sizeof b);

        for(i=0;i<n;i++)
        {
             cin>>a[i];

             b[a[i]][i%2]++;

        }

        sort(a,a+n);

        for(i=0;i<n;i++)
        {
             if(b[a[i]][i%2]) b[a[i]][i%2]--;
             else
             {
                  l=1;
                  break;
             }
        }

        if(l) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
   }

   return 0;
}
