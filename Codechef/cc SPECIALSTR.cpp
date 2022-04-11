/***
 created: 2022-02-03-15.07.51
***/

#include <bits/stdc++.h>
using namespace std;
#define ll int
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
ll parent[1000005];
ll bl[1000005][21];
ll nxt[105];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        string a;

        ll n,m,i,j,k,l;

        cin>>n>>a>>m;

        a='#'+a;

        vector<int> nxt(26, n + 1), parent(n + 1);

        for(i=n; i>=1; i--)
        {
            k=(a[i]-'a'+1)%26;
            parent[i]=nxt[k];
            nxt[a[i]-'a']=i;
        }

        ll lg=log2(m)+1;

        vector<vector<int>> bl(n+2, vector<int>(lg + 2, n + 1));

        for(i=1; i<=n; i++)
        {
            bl[i][0]=parent[i];
        }

        for(j=1; j<=lg; j++)
        {
            for(i=n; i>=1; i--)
            {
                bl[i][j] = bl[bl[i][j-1]][j-1];
            }
        }

        ll ans=1e9;

        for(i=1; i<=n; i++)
        {
            if(a[i]=='a')
            {
                k=m-1;
                l=i;
                for(j=lg; j>=0; j--)
                {
                    if(k & (1<<j))
                    {
                        l=bl[l][j];
                    }
                }
                if(l!=n+1)
                {
                    ans=min(ans,l-i+1-m);
                }
            }
        }

        if(ans==1e9) ans=-1;


        cout<<ans<<nl;


        //memset(bl,0,sizeof bl);

    }

    get_lost_idiot;
}

