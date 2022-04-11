/***
 created: 2022-02-06-14.40.30
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
        ll n,m,i,j,k,l;

        cin>>n;

        ll a[n+5];

        for(i=0;i<n;i++)
        {
             cin>>a[i];
        }

        if(n%2==0)
        {
             for(i=0;i<n;i+=2)
             {
                  cout<<a[i+1]<<" "<<-a[i]<< " ";
             }
        }

        else
        {
             if(a[0]+a[1]!=0)
             {
                  cout<<-a[2]<<" "<<-a[2]<<" "<<(a[0]+a[1])<<" ";
             }
             else if(a[1]+a[2]!=0)
             {
                  cout<<(a[2]+a[1])<<" "<<-a[0]<<" "<<-a[0]<<" ";
             }
             else if(a[0]+a[2]!=0)
             {
                  cout<<-a[1]<<" "<<(a[2]+a[0])<<" "<<-a[1]<<" ";
             }
             for(i=3;i<n;i+=2)
             {
                  cout<<a[i+1]<<" "<<-a[i]<< " ";
             }
        }
        cout<<nl;
   }

   get_lost_idiot;
}
