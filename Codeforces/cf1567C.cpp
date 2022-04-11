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

        ll n,m,i,j,k,l;


        cin>>a;

        for(i=0,n=0,m=0;i<a.size();i++)
        {
             if(i%2) n=n*10+a[i]-'0';
             else m=m*10+a[i]-'0';
        }

        cout<<((n+1)*(m+1))-2<<endl;
   }

   return 0;
}
