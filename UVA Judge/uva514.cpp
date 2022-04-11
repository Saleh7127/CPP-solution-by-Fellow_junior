/***
 created: 2021-10-28-23.44.07
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l;

   while(cin>>n && n)
   {
        ll a[n+4];

        while(cin>>a[0] && a[0])
        {
             for(i=1;i<n;i++)
             {
                  cin>>a[i];
             }

             k=0;

             stack<ll>x;

             for(i=1;i<=n;i++)
             {
                  x.push(i);

                  while(x.empty()==false && a[k]==x.top())
                  {
                       k++;
                       x.pop();
                  }
             }

             if(x.size()==0) cout<<"Yes"<<endl;
             else cout<<"No"<<endl;
        }

        cout<<endl;
   }


   get_lost_idiot;
}
