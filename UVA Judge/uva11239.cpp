/***
 created: 2022-03-26-23.24.25
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

map<string,ll>cnt;

bool cmp(pair<ll,string>a,pair<ll,string>b)
{
    if(a.first==b.first) return a.second<b.second;
    return a.first>b.first;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a,b,last;


    while(getline(cin,a))
    {
        if(a=="0") break;
        last="";


        vector<string>p;
        map<string,ll>check;
        map<string,string>parent;


        while(1)
        {
            if(a=="1") break;

            if(a[0]>='A' && a[0]<='Z')
            {
                if(a!=last)
                {
                    p.push_back(a);
                }
                last=a;
            }
            else
            {
                if(check[a]==0)
                {
                    if(parent[a]!="")
                    {
                        if(parent[a]!=last)
                        {
                            check[a]=1;
                            b=parent[a];
                            cnt[b]--;
                        }
                    }
                    else
                    {
                        parent[a]=last;
                        cnt[last]++;
                    }
                }
            }
            getline(cin,a);
        }

        vector<pair<ll,string>>ans;

        for(auto d:p)
        {
            ans.push_back({cnt[d],d});
        }

        sort(ans.begin(),ans.end(),cmp);

        for(auto d:ans)
        {
            cout<<d.second<<" "<<d.first<<nl;
        }

        cnt.clear();
    }

    get_lost_idiot;
}

