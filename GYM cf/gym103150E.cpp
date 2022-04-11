#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        string a,b;

        ll n,m,i,j,k,l=0;

        cin>>n>>a>>b;

        for(i=0;b[i];i++)
        {
             if(b[i]=='o')
             {
                  cout<<"YES"<<endl;
                  l=1;
                  break;
             }
        }
        if(!l) cout<<"NO"<<endl;

   }

   return 0;
}
