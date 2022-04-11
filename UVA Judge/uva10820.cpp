#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll phi[100000],mark[100000];

void phifun()
{
    ll i,j,k,l;
    for(i=1;i<=50005;i++)
    {
        phi[i]=i;
    }
    for(i=2;i<=50005;i++)
    {
        if(mark[i]==0)
        {
            for(j=i;j<=50005;j+=i)
            {
                mark[j]=1;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
    for(i=2;i<=50005;i++)
    {
        phi[i]=phi[i-1]+(phi[i]*2);
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   phifun();

   ll n;
   while(cin>>n && n)
   {
       cout<<phi[n]<<endl;
   }

   return 0;
}
