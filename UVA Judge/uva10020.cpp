#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
    return a.second>b.second;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        vector<pair<ll,ll>>x,ans;

        ll l,r,i,j=0,k=0,m;

        cin>>m;

        while(cin>>l>>r && (l||r))
        {
            x.push_back({l,r});
        }

        sort(x.begin(),x.end(),cmp);

        while(j<m)
        {
            k=0;
            for(i=0; i<x.size(); i++)
            {
                if(x[i].first<=j && x[i].second>j)
                {
                    ans.push_back(x[i]);

                    j=x[i].second;
                    x.erase(x.begin()+i);
                    i--;
                    k=1;
                }
            }
            if(k==0) break;
        }

        cout<<endl;

        if(j>=m)
        {
            cout<<ans.size()<<endl;

            for(i=0; i<ans.size(); i++)
            {
                cout<<ans[i].first<<" "<<ans[i].second<<endl;
            }
        }
        else cout<<0<<endl;
    }


    return 0;
}

/*
#include <iostream>
#include<algorithm>
using namespace std;
int vis[100010];

struct node
{
    int start, end, cover;
} seg[100010], outn[100010];

int cmp(node a, node b)
{
    return a.end > b.end;
}

int main()
{
    int ca;
    cin >> ca;
    while (ca--)
    {
        int b;
        cin >> b;
        int n=0;
        while (1)
        {
            cin >> seg[n].start >> seg[n].end;
            if (seg[n].start == 0 && seg[n].end == 0)
                break;
            n++;
        }
        sort(seg, seg + n, cmp);
        int start = 0, end = b, out = 0, i;
        while (start < end)
        {
            for (i = 0; i < n; i++)
                if (seg[i].start <= start && seg[i].end > start)
                {
                    start = seg[i].end;
                    outn[out++] = seg[i];
                    break;
                }
            if (i == n)
                break;
        }
        if (i == n)
            cout << "0" << endl;
        else
        {
            cout << out << endl;
            for (int i = 0; i < out; i++)
                cout << outn[i].start << " " << outn[i].end << endl;
        }
        if (ca)
            cout << endl;
    }
    return 0;

}
*/
