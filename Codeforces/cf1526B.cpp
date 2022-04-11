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
        ll n,m,i,j,k,l;

        cin>>n;

        if(n<=10) cout<<"NO"<<endl;
        else if(n%11==0) cout<<"YES"<<endl;
        else if(n%11)
        {
             k=n%11;
             n-=(111*k);
             if(n>=0 && n%11==0)
             {
                  cout<<"YES"<<endl;
             }
             else cout<<"NO"<<endl;
        }
   }

   return 0;
}

