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

        ll n,a,b,m,i,j,k,l=0;


        cin>>n>>a>>b;

        if(b==1)
        {
             cout<<"YES"<<endl;
        }
        else if(a==1)
        {
             if((n-1)%b==0) cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
        }
        else
        {
             for(i=1;i<=n;i=i*a)
             {
                  if((n-i)%b==0)
                  {
                       l=1;
                       break;
                  }
             }
             if(l) cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
        }


   }

   return 0;
}
