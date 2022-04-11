#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll a[100005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,i,j,k=1,l;
   cin>>n;
   for(i=2;i<=n;i++)
   {
       if(a[i]==0)
       {
           a[i]=k;

           for(j=i;j<=n;j+=i)
           {
               a[j]=k;
           }
         k++;
       }
       cout<<a[i]<<" ";
   }


   return 0;
}
