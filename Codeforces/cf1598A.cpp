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
        char a[2][105];

        ll n,m,i,j,k,l=0;

        cin>>n;

        for(i=0;i<2;i++)
        {
             for(j=0;j<n;j++)
             {
                  cin>>a[i][j];
             }
        }

        for(i=0;i<n;i++)
        {
             if(a[0][i]==a[1][i] && a[0][i]=='1')
             {
                  l=1;
             }
        }

        if(l) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


   }


   return 0;
}
