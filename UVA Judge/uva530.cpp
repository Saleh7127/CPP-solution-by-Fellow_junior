#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
int main()
{

   ll n,r,ans,f,i,j,k;
   while(cin>>n>>r && n||r)
   {
       if(n!=0 && r==0)
       {
           cout<<1<<endl;
           continue;
       }
       if(r>(n/2)) r=n-r;
       ans=1;
       for(i=0;i<r;i++)
       {
           ans=ans*(n-i);
           ans=ans/(i+1);
       }
       cout<<ans<<endl;
   }

   return 0;
}
