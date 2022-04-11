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
       ll n,i,j=0,k,l;
       cin>>n;
       vector<ll>a(n),c(n);
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<n;i++)
       {
           cin>>c[i];
       }
       vector<ll>ans;
       for(i=0;i<n;i++)
       {
           if(c[i]==0)
           {
               ans.push_back(a[i]);
           }
       }
       sort(ans.begin(),ans.end(),greater<int>());
       for(i=0;i<n;i++)
       {
           if(c[i])
           {
               cout<<a[i]<< " ";
           }
           else
           {
               cout<<ans[j]<<" ";
               j++;
           }
       }
       cout<<endl;
   }


   return 0;
}
