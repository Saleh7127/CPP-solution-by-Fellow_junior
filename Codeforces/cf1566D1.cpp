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

        cin>>n>>m;

        n*=m;

        vector<ll>a(n),b;

        for(i=0;i<n;i++) cin>>a[i];


        for(i=n-1;i>=0;i--)
        {
             k=0;
             for(j=0;j<i;j++)
             {
                  if(a[j]<a[i])
                  {
                       k++;
                  }
             }
             l+=k;
        }

        cout<<l<<endl;
   }

   return 0;
}

