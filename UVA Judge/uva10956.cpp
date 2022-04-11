#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

ll bigmod(ll a,ll c,ll d)
{
    if(c==0) return 1;
    ll x=bigmod(a,c/2,d);
    x=((ull)x*(ull)x)%d;
    if(c%2==1)
    {
        x=((ull)x*(ull)a)%d;
    }
    return x;
}

bool xxx(ll a,ll n)
{

    if(n<2) return false;
    ll u=n-1,t=0;

    while(u%2==0) u>>=1,t++;

    ll x=bigmod(a,u,n);

    if(x == 1 || x ==n-1) return true;

    for(ll i=0; i<t-1; i++)
    {
        x=((ull)x * (ull)x) %n;
        if(x==1) return false;
        if(x==n-1) return true;
    }
    return false;
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll b,l,r,i,j,k,n,m=0,e,f,pr;

    while(cin>>b>>l>>r && (b || l || r))
    {
        vector<ll>x;

        pr=0;

        for(i=l; i<=r; i++)
        {
            if(i%2==1)
            {
                if(!(xxx(2, i) && xxx(7, i) && xxx(61, i)))
                {
                    pr++;

                    if(xxx(b,i))
                    {
                        x.push_back(i);
                    }
                }
            }
        }


        if(m) cout<<endl;
        m=1;

        cout<<"There are "<<pr<<" odd non-prime numbers between "<<l<<" and "<<r<<"."<<endl;
        if(x.size())
        {
            cout<<x.size()<<" suspects fail in base "<<b<<":"<<endl;
            for(auto dd:x)
            {
                cout<<dd<<endl;
            }
        }
        else
        {
            cout<<"There are no failures in base "<<b<<"."<<endl;
        }

        x.clear();

    }


    return 0;
}
