#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l;

   cin>>n;

   ll a[n+4];

   for(i=0;i<n;i++) cin>>a[i];

   if(n==1)
   {
        cout<<"1 1"<<endl;
        cout<<a[0]<<endl;
        cout<<"1 1"<<endl;
        cout<<a[0]<<endl;
        cout<<"1 1"<<endl;
        cout<<(-3*a[0])<<endl;
   }
   else
   {
        ///segment1
        cout<<"1 1"<<endl;
        cout<<(n-1)*a[0]<<endl;

        ///segment2
        cout<<"2 "<<n<<endl;
        for(i=1;i<n;i++)
        {
             cout<<(n-1)*a[i]<<" ";
        }
        cout<<endl;

        ///segment3
        cout<<"1 "<<n<<endl;
        for(i=0;i<n;i++)
        {
             cout<<-(n*a[i])<<" ";
        }
        cout<<endl;

   }

   return 0;
}
