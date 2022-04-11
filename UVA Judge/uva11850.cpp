#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   while(cin>>n && n)
   {

        ll a[n+5];

        for(i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);
        l=0;
        for(i=1;i<n;i++)
        {
             if(a[i]-a[i-1]>200)
             {
                  l=1;
                  break;
             }
        }

        if(l) cout<<"IMPOSSIBLE"<<endl;
        else
        {
             if((1422-a[n-1])*2<=200) cout<<"POSSIBLE"<<endl;
             else cout<<"IMPOSSIBLE"<<endl;
        }
   }

   return 0;
}
