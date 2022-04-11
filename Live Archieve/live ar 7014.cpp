#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

map<ll,set<char>>team;
map<char,set<ll>>prblm;

string verdict;

ll T,P,S;


bool isideal()
{
     for(ll i=1;i<=T;i++)
     {
          if(team[i].size()==0 || team[i].size()==P) return 0;
     }
     for(ll i=0;i<P;i++)
     {
          if(prblm[i+'A'].size()==0 || prblm[i+'A'].size()==T) return 0;
     }
     return 1;
}

struct submission
{
    ll t;
    char p;
    string time;

}sub;


bool cmp(submission a,submission b)
{
    return a.time<b.time;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    while(cin>>T>>P>>S && (T+P+S)>0)
    {
        string s=";;;;;;;;;",e="--:--:--";

        vector<submission>x;

        for(ll i=0; i<S; i++)
        {
            cin>>sub.t>>sub.p>>sub.time>>verdict;

            if(verdict=="No")
            {
                 getline(cin,verdict);
                 continue;
            }

            x.push_back(sub);
        }

        sort(x.begin(),x.end(),cmp);

        ll ans=0;

        for(auto ii:x)
        {
             ll ti=ii.t;
             char pp=ii.p;
             string sm=ii.time;

             team[ti].insert(pp);
             prblm[pp].insert(ti);

             if(isideal())
             {
                  s=min(s,sm);
                  ans=1;
             }
             else if(ans)
             {
                  e=max(e,sm);
                  ans=0;
             }
        }

        if(s==";;;;;;;;;") cout<<"--:--:-- ";
        else cout<<s<<" ";

        cout<<e<<endl;

        team.clear(),prblm.clear();
    }


    return 0;
}
