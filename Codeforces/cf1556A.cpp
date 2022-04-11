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

        if(n+m==0) cout<<0<<endl;
        else if(n==m) cout<<1<<endl;
        else if(abs(n-m)%2) cout<<-1<<endl;
        else cout<<2<<endl;
   }


   return 0;
}

