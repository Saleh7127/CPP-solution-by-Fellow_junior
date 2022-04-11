/***
 created: 2022-04-09-03.10.55
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    ll n,m,i,j,k,l;

    char c;

    string a;

    cin>>n;

    map<char,pair<ll,ll>>x;

    for(i=0;i<n;i++)
    {
        cin>>c>>j>>k;

        x[c]={j,k};
    }


    while(cin>>a && a!="*")
    {
        stack<pair<ll,ll>>p;

        ll ans=0;
        l=0;

        if(a.size()==1)
        {
            cout<<0<<nl;
        }
        else
        {
            for(i=0;i<a.size();i++)
            {
                if(isalpha(a[i]))
                {
                    auto d=x[a[i]];

                    p.push(d);
                }
                else if(a[i]==')')
                {
                    auto d2=p.top();
                    p.pop();

                    auto d1=p.top();
                    p.pop();

                    if(d1.second!=d2.first)
                    {
                        ///cout<<d1.second<<" "<<d2.first<<nl;

                        cout<<"error"<<nl;
                        l=1;
                        break;
                    }
                    else
                    {
                        ans+=(d1.first*d1.second*d2.second);
                        p.push({d1.first,d2.second});
                    }
                }
            }

            if(!l) cout<<ans<<nl;
        }
    }

    get_lost_idiot;
}
