/***
 created: 2021-11-25-20.58.41
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

        ll a[n+4],b[n+4];

        deque<ll>aa,bb,x,y;

        for(i=0;i<n;i++)
        {
             cin>>b[i];
             a[n-i-1]=b[i];
             x.push_back(b[i]);
        }

        i=0,j=n-1;


        while(i<=j)
        {
             if(i==j)
             {
                 aa.push_back(a[i]);
                 bb.push_front(a[i]);
                 break;
             }

             if(a[i]<a[j])
             {
                  aa.push_front(a[i]);
                  bb.push_front(a[i]);
                  i++;
             }
             else if(a[j]<a[i])
             {
                  aa.push_back(a[j]);
                  bb.push_back(a[j]);
                  j--;
             }
        }

        if(aa==x || bb==x)
        {
              for(i=0;i<n;i++) cout<<a[i]<<" ";

              cout<<nl;
        }
        else cout<<-1<<nl;

   }


   get_lost_idiot;
}

