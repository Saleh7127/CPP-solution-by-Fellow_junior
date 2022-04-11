/***
 created: 2022-03-27-16.56.58
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'


bool cmp(pair<ll,string>a,pair<ll,string>b)
{
    if(a.first==b.first)
    {
        return a<b;
    }
    return a<b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {

        cin.ignore();
        string a,c,e;

        getline(cin,a);

        ll n,m,i,j,k,b,l;
        map<string,ll>cst;
        vector<string>item;

        cin>>m>>n>>b;

        while(m--)
        {
            cin>>c>>k;
            cst[c]=k;
        }

        vector<pair<ll,string> >ans;

        for(i=0;i<n;i++)
        {
            cin.ignore();

            getline(cin,c);
            //item.push_back(c);

            cin>>k;
            l=0;
            while(k--)
            {
                cin>>e>>j;

                l+=(cst[e]*j);
            }

            if(l<=b) ans.push_back({l,c});
        }

        transform(a.begin(),a.end(),a.begin(), ::toupper);

        cout<<a<<nl;

        if(ans.size())
        {
            sort(ans.begin(),ans.end());

            for(i=0;i<ans.size();i++)
            {
                cout<<ans[i].second<<nl;
            }
        }
        else
        {
            cout<<"Too expensive!"<<nl;
        }

        cout<<nl;
    }

    get_lost_idiot;
}

