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
        string a;
        ll n,m,i;

        cin>>n>>a;

        for(i=0;i<n;i++)
        {
             if(a[i]=='U') a[i]='D';
             else if(a[i]=='D') a[i]='U';
        }

        cout<<a<<endl;
   }


   return 0;
}
