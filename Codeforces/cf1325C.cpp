#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>a[100005];
ll ans[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll c,b,n,m,i,j,k,l=0;
    cin>>n;
    memset(ans,-1,sizeof(ans));

    for(i=1; i<n; i++)
    {
        cin>>c>>b;
        c--,b--;
        a[c].push_back(i);
        a[b].push_back(i);
    }
    for(i=0; i<n; i++)
    {
        if(a[i].size()>2)
        {
            ans[a[i][0]]=0;
            ans[a[i][1]]=1;
            ans[a[i][2]]=2;
            l=3;
            break;
        }
    }

    for(i=1; i<n; i++)
    {
        if (ans[i] == -1)
        {
            ans[i] = l;
            l++;
            cout << ans[i]<<endl;
        }
        else cout << ans[i]<<endl;
    }

    return 0;
}
