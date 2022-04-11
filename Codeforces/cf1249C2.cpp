#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll f[1212];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   f[0]=1;
   for(ll o=1;o<=39;o++)
   {
        f[o]=f[o-1]*3;
   }

   test
   {
        ll n,m,i,j,k=0,l=0;
        cin>>n;

        for(i=38;i>=0;i--)
        {
             if(l+f[i]==n)
             {
                  k=l+f[i];
                  break;
             }
             else if(l+f[i]>n)
             {
                  k=l+f[i];
             }
             else
             {
                  l+=f[i];
             }
        }
        cout<<k<<endl;
   }

   return 0;
}
