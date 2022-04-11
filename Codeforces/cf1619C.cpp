/***
 created: 2022-01-20-17.19.32
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

   test
   {
        ll n=0,a,b,s,i,j,k,l;

        cin>>a>>s;

        vector<ll>x;

        while(s)
        {
             j=a%10;
             k=s%10;
             if(j<=k)
             {
                  x.push_back(k-j);
             }
             else
             {
                  k+=10*((s/=10)%10);
                  if(j<k && k>=10 && k<=19)
                  {
                       x.push_back(k-j);
                  }
                  else
                  {
                       n=-1;
                       break;
                  }
             }
             a/=10;
             s/=10;
        }

        if(n==-1 || a>0)
        {
             cout<<-1<<nl;
             continue;
        }

        j=0;

        for(i=x.size()-1;i>=0;i--)
        {
             if(j==0 && x[i]==0) continue;
             cout<<x[i];
             j=1;
        }
        cout<<nl;
   }



   get_lost_idiot;
}
