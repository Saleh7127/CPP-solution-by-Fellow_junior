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
        ll n,m,i,j,k=1e12,l=0;

        cin>>n;

        vector<ll>a(n);

        for(i=0;i<n;i++)
        {
             cin>>a[i];
        }

        sort(a.begin(),a.end());

        if(n==1)
        {
             cout<<1<<endl;
             continue;
        }

        for(i=0;i<n;i++)
        {
             if(a[i]<=0) l++;
        }
        if(l<=1)
        {
             cout<<l+1<<endl;
             continue;
        }
        for(i=1;i<n;i++)
        {
             if(a[i]>0) break;
             k=min(k,a[i]-a[i-1]);
        }
        for(i=0;i<n;i++)
        {
             if(a[i]>0 && a[i]<=k)
             {
                  l++;
                  break;
             }
        }

        cout<<l<<endl;
   }

   return 0;
}

