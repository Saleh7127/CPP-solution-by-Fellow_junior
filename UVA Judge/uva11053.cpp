#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l,a,b;

   while(cin>>n && n)
   {
        cin>>a>>b;

        map<ll,ll>x;

        l=n;
        k=0;

        while(true)
        {
             k=((a*(k*k%n))%n + b)%n;

             x[k]++;

             if(x[k]==2) l--;
             if(x[k]==3)
             {
                  cout<<l<<endl;
                  break;
             }

        }
   }


   return 0;
}
