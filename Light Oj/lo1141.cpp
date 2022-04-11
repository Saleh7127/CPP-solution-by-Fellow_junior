#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>p[1005];

void factor()
{
    ll i,j,n;

    for(j=2; j<=1000; j++)
    {
        n=j;
        for( i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    n/=i;
                }
                p[j].push_back(i);
            }
        }
        if(n>1 && n!=j)
        {
            p[j].push_back(n);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    factor();

    test
    {

        ll n,m,i,j,k,l=-1;

        cin>>n>>m;

        cout<<"Case "<<cs<<": ";

        if(n==m) cout<<0<<endl;
        else if(p[n].size()==0) cout<<-1<<endl;
        else
        {
            ll ans[2000],u,v;

            memset(ans,-1,sizeof ans);

            queue<ll>q;

            q.push(n);

            ans[n]=0;

            while(q.empty()==false)
            {
                u=q.front();

                q.pop();

                for(i=0;i<p[u].size();i++)
                {
                    v = u + p[u][i];

                    if(v<=m && ans[v]==-1)
                    {
                        ans[v]=ans[u]+1;

                        q.push(v);

                        if(v==m)
                        {
                            l=ans[v];
                            break;
                        }
                    }
                }

                if(l>=0) break;
            }

            cout<<l<<endl;

        }

    }


    return 0;
}
