#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,k;

   vector<ll>a,b;

   map<ll,ll>x;


   cin>>n;

   k=(n*(n+1))/2;

   if(k%2) cout<<"NO"<<endl;
   else
   {
       k=k/2;

       cout<<"YES"<<endl;
       for(i=n;i>=1;i--)
       {
           if(i<=k)
           {
               a.push_back(i);
               k-=i;
               x[i]=1;
           }
           if(k==0) break;
       }

       cout<<a.size()<<endl;

       for(auto s:a)
       {
           cout<<s<<" ";
       }
       cout<<endl;
       cout<<n-a.size()<<endl;

       for(i=1;i<=n;i++)
       {
           if(x[i]!=1) cout<<i<<" ";
       }
       cout<<endl;
   }


   return 0;
}
