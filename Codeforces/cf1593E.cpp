#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        int n,k,i,j,l,ans;

        cin>>n>>k;

        set<int>x[n+2];
        stack<int>y;

        for(i=0; i<n-1; i++)
        {
            cin>>j>>l;
            x[j].insert(l);
            x[l].insert(j);
        }

        for(i=1; i<=n; i++)
        {
            if(x[i].size()<2) y.push(i);
        }

        ans=n;

        while(k--)
        {
            if(y.empty()==true) break;

            stack<int>z;

            while(y.empty()==false)
            {
                int xx=y.top();

                y.pop();

                for(auto d:x[xx])
                {
                    x[d].erase(xx);

                    if(x[d].size()<2) z.push(d);

                }
                ans--;
            }
            y=z;
        }

        ans=max(ans,0);

        cout<<ans<<"\n";
    }
    return 0;
}

