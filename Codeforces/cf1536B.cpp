#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
void sol()
{
    ll n;

    string a,b;
    map<string,bool>x;
    cin>>n>>a;

    for(ll i=0; i<n; i++)
    {
        b="";
        for(ll j=i; j<n; j++)
        {
            b.push_back(a[j]);
            x[b]=1;
        }
    }

    char i,j,k,l,g;

    for(i='a'; i<='z'; i++)
    {
        b.clear();
        b.push_back(i);
        if(x[b]==0)
        {
            cout<<b<<endl;
            return;
        }
    }
    for(i='a'; i<='z'; i++)
    {
        for(j='a'; j<='z'; j++)
        {
            b.clear();
            b.push_back(i);
            b.push_back(j);
            if(x[b]==0)
            {
                cout<<b<<endl;
                return;
            }
        }
    }

    for(i='a'; i<='z'; i++)
    {
        for(j='a'; j<='z'; j++)
        {
            for(k='a'; k<='z'; k++)
            {
                b.clear();
                b.push_back(i);
                b.push_back(j);
                b.push_back(k);
                if(x[b]==0)
                {
                    cout<<b<<endl;
                    return;
                }
            }
        }
    }

    for(i='a'; i<='z'; i++)
    {
        for(j='a'; j<='z'; j++)
        {
            for(k='a'; k<='z'; k++)
            {
                for(l='a'; l<='z'; l++)
                {
                    b.clear();
                    b.push_back(i);
                    b.push_back(j);
                    b.push_back(k);
                    b.push_back(l);
                    if(x[b]==0)
                    {
                        cout<<b<<endl;
                        return;
                    }
                }
            }
        }
    }

    for(i='a'; i<='z'; i++)
    {
        for(j='a'; j<='z'; j++)
        {
            for(k='a'; k<='z'; k++)
            {
                for(l='a'; l<='z'; l++)
                {
                    for(g='a'; g<='z'; g++)
                    {
                        b.clear();
                        b.push_back(i);
                        b.push_back(j);
                        b.push_back(k);
                        b.push_back(l);
                        b.push_back(g);
                        if(x[b]==0)
                        {
                            cout<<b<<endl;
                            return;
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        sol();
    }

    return 0;
}

