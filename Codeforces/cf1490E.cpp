#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<pair<ll,ll>>x;

bool check(ll ind,ll n)
{
    ll c=0,i;
    c+=x[ind].first;

    for(i=0; i<n; i++)
    {
        if(i!=ind)
        {
            if(x[i].first>c) return 0;
            c+=x[i].first;
        }
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
        ll n,m,i,j,k,l,h;
        cin>>n;
        vector<ll>a;

        for(i=0; i<n; i++)
        {
            cin>>m;
            x.push_back({m,i+1});
        }

        sort(x.begin(),x.end());

        l=0;
        h=n-1;
        while(l<=h)
        {
            ll mid=(l+h)/2;
            if(check(mid,n))
            {
                k=mid;
                h=mid-1;
            }
            else l=mid+1;
        }

        cout<<n-k<<endl;

        for(i=k; i<n; i++)
        {
            a.push_back(x[i].second);
        }

        sort(a.begin(),a.end());

        for(i=0; i<a.size(); i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

        x.clear();

    }


    return 0;
}
