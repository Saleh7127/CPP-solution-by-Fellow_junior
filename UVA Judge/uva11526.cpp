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

      ll a,b=0,i,j,k;
      cin>>a;

      for(i=1;i<=a;i++)
      {
          k=(a/i)-(a/(i+1));
          if(k<=0) break;

          b+=(k*i);
      }

      for(i=a/(i+1);i>=1;i--)
      {
          b+=(a/i);
      }

      cout<<b<<endl;
   }


   return 0;
}
