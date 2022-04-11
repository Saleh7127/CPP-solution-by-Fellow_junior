#include <bits/stdc++.h>
using namespace std;
#define ll long long
//#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l;

        cin>>n;

        if(n%2)
        {
             k=(n-1)/2;
             l=n-1;
             for(i=1;i<n;i++)
             {
                  for(j=1;j<=l;j++)
                  {
                      if(j<=k)cout<<1<<" ";
                      else cout<<-1<<" ";
                  }
                  l--;
             }
             cout<<endl;

        }
        else
        {
             for(i=0;i<n;i++)
             {
                  for(j=i+1;j<n;j++)
                  {
                       if((j-i)<(n/2)) cout<<1<<" ";
                       else if((j-i)==(n/2)) cout<<0<<" ";
                       else cout<<-1<<" ";
                  }
             }
             cout<<endl;
        }
   }

   return 0;
}
