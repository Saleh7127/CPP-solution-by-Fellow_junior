#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

bool primee(ll x)
{
     ll i;

     if(x==2) return 0;

     for(i=2;i*i<=x;i++)
     {
          if(x%i==0) return 1;
     }
     return 0;
}


void solve(ll n, string a)
{
     ll i,j,k,l;

     for(i=0;i<n;i++)
     {
          k=a[i]-'0';
          if(k==1 || k==9 || (k>2 && k%2==0))
          {
               cout<<1<<endl<<k<<endl;
               return;
          }
     }

     map<ll,ll>x;

     for(i=0;i<n;i++)
     {
          k=a[i]-'0';
          if(x[k])
          {
               cout<<2<<endl<<k<<k<<endl;
               return;
          }
          else x[k]=i+1;
     }

     for(i=2;i<10;i++)
     {
          for(j=2;j<10;j++)
          {
              if(x[i] && x[j] && i!=j && x[i]<x[j])
              {
                   k=i*10+j;
                   if(primee(k))
                   {
                        cout<<2<<endl<<k<<endl;
                        return;
                   }
              }
          }
     }

}



int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       string a;
       ll n,m,i,j,k,l;

       cin>>n>>a;

       solve(n,a);
   }


   return 0;
}
