#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll c,x,j;
vector<ll>ans[10005];
ll di[10005],cur[10005];

void solve(ll n,ll ind,ll i)
{
    if(n==1)
    {
        for(j=0; j<ind; j++)
        {
            ans[x].push_back(cur[j]);
        }
        x++;
        return;
    }
    for( ; i<c; i++)
    {
        if(n%di[i]==0 && (((n/di[i])>=di[i] || n==di[i])))
        {
            cur[ind]=di[i];

            solve(n/di[i],ind+1,i);
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i,k,l;
    while(cin>>n && n)
    {
        c=x=0;

        for(i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                di[c++]=i;
                if((i*i)!=n)
                {
                    di[c++]=(n/i);
                }
            }
        }
        sort(di,di+c);

        if(c)
        {
            solve(n,0,0);
        }
        cout<<x<<endl;

        for(i=0; i<x; i++)
        {
            cout<<ans[i][0];
            for(j=1; j<ans[i].size(); j++)
            {
                cout<<" "<<ans[i][j];
            }
            cout<<endl;
            ans[i].clear();
        }

    }
    return 0;
}
