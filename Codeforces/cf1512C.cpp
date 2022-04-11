#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<pair<ll,ll>>x,y;
bool check(string a)
{
    ll l=a.size();
    for(ll i=0; i<(l/2); i++)
    {
        if(a[i]!=a[l-i-1]) return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,l,c,d;

        string a;

        cin>>n>>m>>a;
        l=a.size();
        x.clear();
        y.clear();

        for(i=0; i<l; i++)
        {
            if(a[i]=='0') n--;
            else if(a[i]=='1') m--;
        }

        for(i=0; i<l; i++)
        {
            if(i<(l/2))
            {
                if(a[i]=='0' && a[l-i-1]=='?') x.push_back({i,l-i-1});
                if(a[i]=='?' && a[l-i-1]=='0') x.push_back({i,l-i-1});
                if(a[i]=='1' && a[l-i-1]=='?') y.push_back({i,l-i-1});
                if(a[i]=='?' && a[l-i-1]=='1') y.push_back({i,l-i-1});
            }
            else break;
        }
        for(auto i:x)
        {
            a[i.first]='0';
            a[i.second]='0';
            n--;
        }
        for(auto i:y)
        {
            a[i.first]='1';
            a[i.second]='1';
            m--;
        }
        for(i=0; i<(l/2); i++)
        {
            if(a[i]=='?' && a[l-i-1]=='?')
            {
                if(n>=2)
                {
                    n-=2;
                    a[i]='0';
                    a[l-i-1]='0';
                }
                else
                {
                    m-=2;
                    a[i]='1';
                    a[l-i-1]='1';
                }
            }

        }

        if(l%2 && a[l/2]=='?')
        {
            if(n>0)
            {
                j=min(l/2,l-1);
                a[j]='0';
            }
            else
            {
                j=min(l/2,l-1);
                a[j]='1';
            }
        }

        if(check(a)==0 || n<0 || m<0) cout<<-1<<endl;
        else cout<<a<<endl;
    }


    return 0;
}
