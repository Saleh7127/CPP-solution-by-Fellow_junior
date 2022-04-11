/***
 created: 2021-11-20-00.45.32
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<ll>parent(200005),rankk(200005);

void make_set(ll n)
{
    for(ll i=0; i<=2*n+2; i++)
    {
        parent[i] = i;
        rankk[i] = 0;
    }
}

ll find_set(ll v)
{
    if (v == parent[v])
    {
        return v;
    }
    return parent[v] = find_set(parent[v]);
}

void union_sets(ll a, ll b)
{
    a = find_set(a);
    b = find_set(b);

    if (a != b)
    {
        if (rankk[a] < rankk[b])
        {
            swap(a, b);
        }

        parent[b] = a;

        if (rankk[a] == rankk[b])
        {
            rankk[a]++;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll c,n,x,y,ex,ey;


    cin>>n;

    make_set(n+5);

    while(cin>>c>>x>>y && (c+x+y))
    {

        ex=find_set(x+n); ///consider enemy of x
        ey=find_set(y+n); ///consider enemy of y
        x=find_set(x);
        y=find_set(y);

        if(c==1)
        {
            ///set
            ///we r friend if your enemy is not my friend

            if(x==ey) cout<<-1<<nl;
            else
            {
                union_sets(x,y);
                union_sets(ex,ey);
            }
        }

        else if(c==2)
        {
            ///set
            ///we r enemy if we r not friend

            if(x==y) cout<<-1<<nl;
            else
            {
                union_sets(x,ey);
                union_sets(ex,y);
            }
        }
        else if(c==3)
        {
             ///check r we friend?

            if(x==y) cout<<1<<nl;
            else cout<<0<<nl;
        }
        else
        {
            ///check r we enemy?
            ///we r enemy if your enemy is my friend

            if(x==ey) cout<<1<<nl;
            else cout<<0<<nl;
        }
    }

    get_lost_idiot;
}
