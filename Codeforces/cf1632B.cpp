/***
 created: 2022-01-30-20.06.40
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
map<ll,ll>a;
void pr()
{
     ll n,m,i,j,k;

     for(i=0;i<30;i++)
     {
          a[((1<<i))]=1;
     }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    pr();
    test
    {
        ll n,i;

        cin>>n;

       ll l=0;

        for(i=n-1;i>=0;i--)
        {
             cout<<i<<" ";
             if(a[i]==1)
             {
                  l=i;
                  break;
             }
        }
        for(i=0;i<l;i++)
        {
             cout<<i<<" ";
        }
        cout<<nl;
    }


    get_lost_idiot;
}

