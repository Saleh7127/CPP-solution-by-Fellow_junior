#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l;

   while(cin>>n && n)
   {
        ll a[n+4];

        for(i=0;i<n;i++) cin>>a[i];

        cin>>k;

        for(i=n-1;i>=0;i--)
        {
             for(j=0;j<i;j++)
             {
                  a[j]=a[j+1]-a[j];
             }
        }

        for(i=0;i<k;i++)
        {
             for(j=1;j<n;j++)
             {
                  a[j]+=a[j-1];
             }
        }

        cout<<"Term "<<n+k<<" of the sequence is "<<a[n-1]<<endl;

   }

   return 0;
}
