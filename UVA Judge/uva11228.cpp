#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

vector<ll>parent,rankk;
vector<pair<double,pair<ll,ll>>>edge;

void make_set(ll n)
{
    for(ll i=0; i<n; i++)
    {
        parent[i] = i;
        //rankk[i] = 0;
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
        if(rand()%2)
        {
            swap(a,b);
        }
        parent[b]=a;

        /* else use this
        if (rankk[a] < rankk[b]){swap(a, b);} parent[b] = a; if (rankk[a] == rankk[b]){rankk[a]++;}
        */
    }
}


double distancee(double xi,double xj, double yi, double yj)
{
    return sqrt((xi-xj)*(xi-xj) + (yi-yj)*(yi-yj));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        ll n,i,j,k,l;

        double m,c,d;

        cin>>n>>m;

        l=n;

        c=d=0;

        edge.clear();

        parent.resize(n);
        //rankk.resize(n);

        make_set(n);


        double x[n+4],y[n+4];

        for(i=0; i<n; i++)
        {
            cin>>x[i]>>y[i];
        }

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                double di=distancee(x[i],x[j],y[i],y[j]);
                edge.push_back({di,{i,j}});
            }
        }

        sort(edge.begin(),edge.end());

        for(auto dd:edge)
        {
            if(find_set(dd.second.second)!=find_set(dd.second.first))
            {
                if(dd.first<=m)
                {
                    l--;
                    c+=dd.first;
                }
                else
                {
                    d+=dd.first;
                }
                union_sets(dd.second.first,dd.second.second);
            }
        }

        cout<<"Case #"<<cs<<": "<<l<<" ";
        cout<<fixed<<setprecision(0)<<c<<" "<<d<<endl;

    }



    return 0;
}
