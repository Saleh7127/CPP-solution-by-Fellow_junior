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

        if(n%3!=0 && n%4!=0)
        {
             cout<<"IMPOSSIBLE"<<endl;
        }
        else
        {
             if(n%4==0) cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
             else if(n%3==0) cout<<n/3<<" "<<n/3<<" "<<n/3<<endl;
        }
   }


   return 0;
}
