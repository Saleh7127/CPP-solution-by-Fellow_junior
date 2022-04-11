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
       ll n,c=0,d,e,f,i,j,k,l;
       cin>>n>>k;
       ll a[n+5];
       for(i=1;i<=n;i++)
       {
           cin>>a[i];
           if(a[i]%2) c++;
       }
       if(c<k || c%2!=k%2)
       {
           cout<<"NO"<<endl;
           continue;
       }
       cout<<"YES"<<endl;
       for(i=1;i<=n;i++)
       {
           if(k==1) break;
           if(a[i]%2)
           {
               cout<<i<<" ";
               k--;
           }
       }
       cout<<n<<endl;
   }


   return 0;
}
