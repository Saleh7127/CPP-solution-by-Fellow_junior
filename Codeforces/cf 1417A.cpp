#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
   ///!@[]};

   test
   {
      ll n,k,a[20000],c,d,e=0,f,i,j,l;
      cin>>n>>k;
      for(i=0;i<n;i++)
      {
          cin>>a[i];
      }
      sort(a,a+n);
      for(i=n-1;i>=0;i--)
      {
          for(j=0;j<n;j++)
          {
              if(i==j) continue;
              if(a[i]+a[j]<=k)
              {
                  while(1)
                  {
                      if(a[i]+a[j]<=k)
                      {
                          e++;
                          a[i]+=a[j];
                      }
                      else break;
                  }
              }
              else if(a[i]+a[j]>k)
              {
                  break;
              }
          }
      }
      cout<<e<<endl;
   }


   return 0;
}
