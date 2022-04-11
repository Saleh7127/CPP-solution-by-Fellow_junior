/***
 created: 2022-01-03-20.32.58
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

        cin>>n>>k;

        if(k<=(n+1)/2)
        {
             for(i=0;i<n;i++)
             {
                  for(j=0;j<n;j++)
                  {
                       if(i%2==0 && i==j && k>0)
                       {
                            k--;
                            cout<<"R";
                       }
                       else cout<<".";
                  }
                  cout<<nl;
             }
        }

        else cout<<-1<<nl;
   }


   get_lost_idiot;
}

