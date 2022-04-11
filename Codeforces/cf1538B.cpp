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


        ll n,m,i,j,k=0,l,s=0;

        cin>>n;

        ll a[n+4];
        for(i=0;i<n;i++)
        {
             cin>>a[i];
             s+=a[i];
        }
        if(s%n!=0)
        {
             cout<<-1<<endl;
        }
        else
        {
             l=s/n;
             for(i=0;i<n;i++)
             {
                  if(a[i]>l)
                  {
                       k++;
                  }
             }
             cout<<k<<endl;
        }
   }

   return 0;
}

