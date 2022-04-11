#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l,tt=0;

   while(cin>>n && n)
   {
        ll a[n+5][n+5];

        for(i=0;i<n;i++)
        {
             for(j=0;j<n;j++)
             {
                  cin>>a[i][j];
             }
        }

        cout<<"Case "<<++tt<<":";

        for(i=0;i<n/2;i++)
        {
             l=0;
             for(j=i;j<n-i-1;j++)
             {
                  l+=a[i][j]+a[n-i-1][n-j-1]+a[n-j-1][i]+a[j][n-i-1];
             }
             cout<<" "<<l;
        }

        if(n%2) cout<<" "<<a[n/2][n/2];

        cout<<endl;

   }

   return 0;
}
