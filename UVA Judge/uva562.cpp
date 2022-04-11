#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll dp[100005];
ll  a[100005];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

       ll n,s=0,i,j,k,l;
       cin>>n;
       memset(dp,0,sizeof(dp));
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           s+=a[i];
       }
       dp[0]=1;

       for(i=0;i<n;i++)
       {
           for(j=s;j>=a[i];j--)
           {
               if(dp[j-a[i]])
               {
                   dp[j]=1;
               }
           }
       }
       for(i=s/2;i>=0;i--)
       {
           if(dp[i])
           {
               cout<<abs(s-(2*i))<<endl;
               break;
           }
       }
   }


   return 0;
}
