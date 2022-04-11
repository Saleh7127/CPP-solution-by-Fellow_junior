#include <bits/stdc++.h>
#define pb push_back
using namespace std;

typedef long long ll;

int main()
{

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,m;
        cin >> n >> m;
        vector<pair<int,int>>v;
        map<int,int>mp,mp2;
        for(int i=0; i<m; ++i)
        {
            int x,y;
            cin >> x >> y;
            v.pb({x,y});
            mp2[y]++;
        }
        sort(v.begin(),v.end());

        int ans=0;
        for(auto x : v)
        {
            int xx = x.first;
            int yy=	 x.second;
            if (xx==yy)
            {
                mp[xx]=1;
                continue;
            }
            if (mp[xx]==0)
            {
                mp[xx]=1;
                if (mp2[xx])
                {
                    ++ans;
                    --mp2[xx];
                }
                ++ans;
                continue;
            }
            ans+=2;
            mp[xx+1]=1;

        }
        cout << ans <<'\n';
    }



    return 0;
}
