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
        l=n;
        string a="";

        for(i=1;i<=2*n;i++)
        {
             if(i<=n) a+="(";
             else a+=")";
        }


        for(i=1;i<=n;i++)
        {
             cout<<a<<endl;
             swap(a[l],a[l-1]);
             l--;
        }
   }


   return 0;
}
