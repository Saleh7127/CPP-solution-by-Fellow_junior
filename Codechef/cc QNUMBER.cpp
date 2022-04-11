/***
 created: 2022-04-07-16.30.03
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'


map<ll,ll>dv;

ll td;

void fctr(ll n)
{

    td=1;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ll c=0;
            while(n%i==0)
            {
                n/=i;
                c++;
            }
            dv[i]=c;
            td*=(c+1);
        }
    }
    if(n>1)
    {
        dv[n]=1;
        td*=2;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l,q;

    cin>>n>>q;


    fctr(n);


    while(q--)
    {
        cin>>j>>k;

        if(j==1)
        {
            l=1;
            for(auto d:dv)
            {
                ll c=0;
                while(k%d.first==0)
                {
                    c++;
                    k/=d.first;
                }
                l*=min(c,d.second)+1;
            }

            cout<<l<<nl;
        }
        else if(j==2)
        {
            l=1;
            for(auto d:dv)
            {
                ll c=0;
                while(k%d.first==0)
                {
                    c++;
                    k/=d.first;
                }

                if(c>d.second)
                {
                    l=0;
                    break;
                }

                l*=(d.second-c+1);
            }
            if(k>1) l=0;

            cout<<l<<nl;
        }
        else
        {
            l=1;
            for(auto d:dv)
            {
                ll c=0;
                while(k%d.first==0)
                {
                    c++;
                    k/=d.first;
                }

                if(c>d.second)
                {
                    l=0;
                    break;
                }

                l*=(d.second-c+1);
            }
            if(k>1) l=0;

            cout<<td-l<<nl;
        }
    }


    get_lost_idiot;
}
