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

        if(n==1) cout<<'x';
        else if(n%2)
        {
             n-=2;
             for(i=1;i<=(n+1)/2;i++)
             {
                  cout<<'s';
             }
             cout<<"ex";
             for(i=1;i<=n/2;i++)
             {
                  cout<<'s';
             }
        }
        else
        {
             n--;
             for(i=1;i<=(n+1)/2;i++)
             {
                  cout<<'s';
             }
             cout<<"e";
             for(i=1;i<=n/2;i++)
             {
                  cout<<'s';
             }
        }

        cout<<endl;
   }

   return 0;
}
