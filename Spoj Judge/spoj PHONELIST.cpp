/***
 created: 2022-01-01-22.53.04
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll mod[2]={1000007707,1000007909};
ll base[2]={150,300};

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);



   test
   {
        ll n,m,i,j,k,l=0;

        cin>>n;

        map<pair<ll,ll>,ll>x;
        vector<pair<ll,ll>>y;

        while(n--)
        {
             string a;

             cin>>a;

             ll n1=0,n2=0;
             ll p1=1,p2=1;

             for(i=0;a[i];i++)
             {
                  n1=(n1+ (a[i]-'0'+1)*p1)%mod[0];
                  n2=(n2+ (a[i]-'0'+1)*p2)%mod[1];

                  p1=(p1*base[0])%mod[0];
                  p2=(p2*base[1])%mod[1];

                  x[{n1,n2}]++;
             }

             y.push_back({n1,n2});
        }

        for(auto d:y)
        {
             if(x[d]>1)
             {
                  l=1;
                  break;
             }
        }

        if(l) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
   }

   get_lost_idiot;
}
