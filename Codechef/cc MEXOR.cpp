#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l;

        cin>>n;


        l=1;

        if(n==0) cout<<1<<endl;
        else
        {
             for(i=1;;i++)
             {
                  l*=2;
                  k=l+l-1;

                  if(k>n)
                  {
                       cout<<l<<endl;
                       break;
                  }
             }
        }
   }


   return 0;
}
