/***
 created: 2022-01-04-13.22.40
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll mod[2]= {1000007707,1000007909};
ll base[2]= {150,300};

pair<ll,ll>hashing(string c)
{
    ll n1=0,n2=0;
    ll p1=1,p2=1;

    for(ll i=0; c[i]; i++)
    {
        n1=(n1+ (c[i]-'0'+1)*p1)%mod[0];
        n2=(n2+ (c[i]-'0'+1)*p2)%mod[1];

        p1=(p1*base[0])%mod[0];
        p2=(p2*base[1])%mod[1];
    }

    return {n1,n2};
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        string a,b,c;

        cin>>a;

        set<pair<ll,ll>>x;

        ll i,j,k,l;

        for(i=1; i<=a.size(); i++)
        {
            for(j=0; j<a.size(); j++)
            {
                if(i+j>a.size()) break;

                b="";
                for(k=j; k<(i+j); k++)
                {
                    b+=a[k];
                }

                c="";

                for(k=0; k<i; k++)
                {
                    b=b.back()+b;
                    b.pop_back();
                    c=max(c,b);
                }

                pair<ll,ll> m=hashing(c);

                x.insert(m);
            }
        }

        cout<<x.size()<<nl;
    }

    get_lost_idiot;
}

