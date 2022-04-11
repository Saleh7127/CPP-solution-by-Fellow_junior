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
        ll n,m,i,j=-1,k,l;


        cin>>n;

        l=1;

        if(n<=4)
        {
             cout<<(n+1)/2<<endl;
             continue;
        }


        for(i=1; ;i++)
        {
             l=l*2;

             if(l==n)
             {
                  cout<<n-(l/2)<<endl;
                  break;
             }
             else if(l>n)
             {

                  j=n-(l/2)+1;
                  k=(l/2)-(l/4);

                  cout<<max(j,k)<<endl;
                  break;
             }

        }
   }


   return 0;
}
