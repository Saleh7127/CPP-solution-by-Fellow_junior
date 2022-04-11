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

        deque<ll>x;

        for(i=0;i<n;i++)
        {
             cin>>m;

             if(x.empty())
             {
                  x.push_back(m);
             }
             else
             {
                  k=x.front();

                  if(m<=k)
                  {
                       x.push_front(m);
                  }
                  else x.push_back(m);
             }
        }


        for(auto d:x)
        {
             cout<<d<<" ";
        }
        cout<<endl;
   }

   return 0;
}

