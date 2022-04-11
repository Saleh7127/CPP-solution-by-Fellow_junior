#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool team[200];
bool solved[200][20];
ll pnlt[200][20];

bool cmp(pair<ll,pair<ll,ll>>a, pair<ll,pair<ll,ll>>b)
{
    if(a.second.first!=b.second.first)
    {
        return a.second.first>b.second.first;
    }

    if(a.second.second!=b.second.second)
    {
        return a.second.second<b.second.second;
    }
    else
    {
        return a.first<b.first;
    }
}

int main()
{

    int cs;

    cin>>cs;

    getchar();
    getchar();

    while(cs--)
    {
        memset(team,0,sizeof team);
        memset(pnlt,0,sizeof pnlt);
        memset(solved,0,sizeof solved);

        string a;

        while(getline(cin,a) && a.size())
        {
            stringstream ss(a);
            ll tm,pr,time;
            string ac;

            ss>>tm>>pr>>time>>ac;

            team[tm]=1;

            if(ac[0]=='C' && solved[tm][pr]==0)
            {
                solved[tm][pr]=1;
                pnlt[tm][pr]+=time;
            }
            else if(ac[0]=='I' && solved[tm][pr]==0)
            {
                pnlt[tm][pr]+=20;
            }
        }

        vector<pair<ll,pair<ll,ll>>>x;

        for(ll i=1; i<=100; i++)
        {
            if(team[i]==0) continue;

            ll pr=0,p=0;

            for(ll j=1; j<=9; j++)
            {
                if(solved[i][j]!=0)
                {
                    pr++;
                    p+=pnlt[i][j];
                }
            }

            x.push_back({i,{pr,p}});
        }

        sort(x.begin(),x.end(),cmp);

        for(auto dd:x)
        {
            cout<<dd.first<<" "<<dd.second.first<<" "<<dd.second.second<<endl;
        }

        if(cs) cout<<endl;
    }

    return 0;
}
