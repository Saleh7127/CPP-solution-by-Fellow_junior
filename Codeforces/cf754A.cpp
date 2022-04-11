#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j=0,k=0,l=0;

   cin>>n;
   ll a[n+5];

   for(i=1;i<=n;i++)
   {
        cin>>a[i];
        if(a[i]==0) l++;

        j+=a[i];

        if(j!=0 && k==0)
        {
             k=i;
        }

   }

   if(l==n) cout<<"NO"<<endl;
   else
   {
        if(j==0)
        {
             cout<<"YES"<<endl;
             cout<<2<<endl;
             cout<<1<<" "<<k<<endl;
             cout<<k+1<<" "<<n<<endl;
        }
        else
        {
             cout<<"YES"<<endl;
             cout<<1<<endl;
             cout<<1<<" "<<n<<endl;

        }
   }

   return 0;
}
