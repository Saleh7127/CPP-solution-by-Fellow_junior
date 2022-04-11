#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>x;

void divv(ll a)
{
    for(ll i=2;i*i<=a;i++)
    {
        if(a%i==0)
        {
            x.push_back(i);
            while(a%i==0)
            {
                a/=i;
            }
        }
    }
    if(a>1) x.push_back(a);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;
   cin>>n;
   ll a[n+5],b[n+5];
   for(i=0;i<n;i++)
   {
       cin>>a[i]>>b[i];
   }
   divv(a[0]);
   divv(b[0]);

   for(i=0;i<x.size();i++)
   {
       k=0;
       for(j=0;j<n;j++)
       {
           if(a[j]%x[i]!=0 && b[j]%x[i]!=0)
           {
               k=1;
               break;
           }
       }
       if(k==0)
       {
           cout<<x[i]<<endl;
           return 0;
       }
   }
   cout<<-1<<endl;

   return 0;
}
