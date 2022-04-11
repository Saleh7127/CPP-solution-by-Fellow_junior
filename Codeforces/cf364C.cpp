#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll p[]={2,3,5,7,11,13,17,19,23,29,31};
ll ans[1000000];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l=0;

   cin>>n;

   for(i=0;l<n;i++)
   {
        ans[l++]=p[i];
        for(j=0;j<l;j++)
        {
             if(ans[j]*p[i]<=(2*n*n))
             {
                  ans[l++]=ans[j]*p[i];
             }
        }
   }


   sort(ans,ans+l);

   for(j=0,i=l-1;j<n;i--,j++)
   {
        cout<<ans[i]<<" ";
   }
   cout<<endl;


   return 0;
}
