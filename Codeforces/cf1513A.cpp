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

       ll n,m,i,j,k,l;
       cin>>n>>k;

       l=(n-1)/2;

       if(k>l) cout<<-1<<endl;
       else
       {
           l=n;
           ll a[n+2]={0};
           for(i=2;i<n;i+=2)
           {
               if(k==0) break;
               a[i]=l;
               l--;
               k--;
           }
           l=1;
           for(i=1;i<=n;i++)
           {
               if(a[i]==0) a[i]=l,l++;
               cout<<a[i]<<" ";
           }
           cout<<endl;
       }
   }


   return 0;
}
