/***
 created: 2022-01-01-22.53.04
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll mod[2]= {1000007707,1000007909};
ll base[2]= {150,300};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n;



    map<pair<ll,ll>,string>x;
    vector<pair<ll,ll>>y;

    string a;

    while(getline(cin,a) && a!="")
    {
        istringstream ss(a);

        string b,c;

        ss>>b>>c;

        ll n1=0,n2=0;
        ll p1=1,p2=1;

        for(ll i=0; c[i]; i++)
        {
            n1=(n1+ (c[i]-'0'+1)*p1)%mod[0];
            n2=(n2+ (c[i]-'0'+1)*p2)%mod[1];

            p1=(p1*base[0])%mod[0];
            p2=(p2*base[1])%mod[1];
        }

        x[{n1,n2}]=b;

    }


    string b;

    while(cin>>b)
    {
        ll n1=0,n2=0;
        ll p1=1,p2=1;

        for(ll i=0; b[i]; i++)
        {
            n1=(n1+ (b[i]-'0'+1)*p1)%mod[0];
            n2=(n2+ (b[i]-'0'+1)*p2)%mod[1];

            p1=(p1*base[0])%mod[0];
            p2=(p2*base[1])%mod[1];
        }

         if(x[{n1,n2}].empty()==false) cout<<x[{n1,n2}]<<nl;
         else cout<<"eh"<<nl;

    }

    get_lost_idiot;
}

