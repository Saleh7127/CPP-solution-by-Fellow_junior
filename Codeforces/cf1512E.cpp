/***
 created: 2022-02-04-19.30.35
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
        ll n,m,i,j,k,l,r,s,y,z,u;

        cin>>n>>l>>r>>s;

        k=r-l+1;
        j=k;
        m=(n*(n+1))/2;
        m-=(n-k)*(n-k+1)/2;
        k=k*(k+1)/2;

        if(s<k || s>m)
        {
             cout<<-1<<nl;
             continue;
        }

        vector<ll>x;
        map<ll,ll>e;

        u=s;
        m=n;
        ll d=n;

        for(i=n;i>=1;i--)
        {
             if(j)
             {
                  y=j*(j-1)/2;
                  z=((2*i+1-j)*j)/2;

                  //cout<<y<<" "<<z<<" yz"<<nl;

                  if(u<=z && u-i>=y)
                  {
                       x.push_back(i);
                       e[i]=1;
                       u-=i;
                       j--;
                  }
             }
        }


        if(u>0 || j!=0) cout<<-1<<nl;

        else
        {

             vector<ll>b;

             for(i=1;i<=n;i++)
             {
                  if(e[i]==0)
                  {
                       b.push_back(i);
                  }
             }

             j=0;
             for(i=1;i<=n;i++)
             {
                  if(i==l)
                  {
                       for(auto dd:x) cout<<dd<<" ";

                       i=r;
                  }
                  else
                  {
                       cout<<b[j]<<" ";
                       j++;
                  }
             }

             cout<<nl;
        }
   }


   get_lost_idiot;
}

