#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll nCr[780][780];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,i,j,l=0;


   nCr[0][0]=1;

   for(i=1;i<780;i++)
   {
       nCr[i][0]=nCr[i][i]=1;
       for(j=1;j<i;j++)
       {
           nCr[i][j]=nCr[i-1][j-1]+nCr[i-1][j];
       }
   }

   cin>>n;

   l+=(nCr[n][5]+nCr[n][6]+nCr[n][7]);

   cout<<l<<endl;

   return 0;
}
