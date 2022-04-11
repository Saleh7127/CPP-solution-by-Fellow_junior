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

        for(i=0;i<n;i++)
        {
             cin>>a[i];
             if(i)
             {
                  if((a[i] & a[i-1])!=a[i-1]) l=1;
             }
        }

        if(!l) for(i=0;i<n;i++) cout<<0<<" ";
        else
        {
             cout<<0<<" ";
             for(i=1;i<n;i++)
             {
                  l=a[i-1]^a[i];
                  l=l & a[i-1];
                  a[i]^=l;
                  cout<<l<<" ";
             }
        }

        cout<<endl;

   }

   return 0;
}
