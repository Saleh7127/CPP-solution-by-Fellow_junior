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
       ll n,m,a,b,c,d,e,i,j,k,l=0;
       cin>>n>>m>>a>>b;
       ll x[n+5][m+5];
       memset(x,0,sizeof(x));
       if(n*a!=m*b)
       {
           cout<<"NO"<<endl;
           continue;
       }

       cout<<"YES"<<endl;

       for(i=0;i<n;i++)
       {
           for(j=0;j<a;j++)
           {
               x[i][l]=1;
               l=(l+1)%m;
           }
       }
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               cout<<x[i][j];
           }
           cout<<endl;
       }
   }



   return 0;
}
