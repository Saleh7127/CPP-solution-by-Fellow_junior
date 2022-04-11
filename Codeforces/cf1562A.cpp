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

        cin>>n>>m;

        if(n<=(m/2)+1) cout<<((m+1)/2)-1<<endl;
        else
        {
             cout<<(m-n)<<endl;
        }
   }


   return 0;
}
