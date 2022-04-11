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
        string a,c;

        ll n,m,i,j,k,l=0;

        cin>>n>>a;

        c=a;
        sort(c.begin(),c.end());

        for(i=0;i<n;i++)
        {
             if(a[i]!=c[i]) l++;
        }

        cout<<l<<endl;
   }


   return 0;
}
