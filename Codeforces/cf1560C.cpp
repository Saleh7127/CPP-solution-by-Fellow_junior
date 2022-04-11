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

        m=sqrt(n);

        if(n-(m*m)==0)
        {
             cout<<m<<" "<<1<<endl;
        }
        else
        {
             k=n - m*m;
             l=m+1;
             if(k<=l) cout<<k<<" "<<l<<endl;
             else
             {
                  cout<<l<<" "<<(l-(k-l))<<endl;
             }
        }
   }


   return 0;
}
