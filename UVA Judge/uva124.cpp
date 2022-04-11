#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
char c,cc;
stringstream ss;
string a,b;

bool v[200];
ll g[27][27];
ll x[266];
ll n;
char ans[28];


void topsort(ll in)
{
    if(in==n)
    {
        ans[n]='\n';
        for(ll k=0; k<n; k++)
        {
            cout<<ans[k];
        }
        cout<<endl;
        return;
    }

    for(ll i=0; i<26; i++)
    {
        if(v[i]==0 && x[i])
        {
            for(ll j=0; j<26; j++)
            {
                if(g[i][j] && v[j]) return;
            }
            v[i]=1;
            ans[in]=i+'a';
            topsort(in+1);
            v[i]=0;

        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll m,i,j,k,l,rr=1;


    while(getline(cin,a))
    {
        if(rr>1) cout<<endl;

        rr++;

        memset(g,0,sizeof g);
        memset(x,0,sizeof x);
        memset(v,0,sizeof v);
        n=0;

        ss.clear();
        ss.str(a);

        while(ss>>c)
        {
            x[c-'a']=1;
        }

        for(i=0; i<26; i++)
        {
            if(x[i]) n++;
        }

        getline(cin,b);

        ss.clear();

        ss.str(b);

        while(ss>>c>>cc)
        {
            g[c-'a'][cc-'a']=1;
        }

        topsort(0);
    }


    return 0;
}

