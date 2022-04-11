#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    vector<pair<ll,string>>x;
    vector<ll>a;
    vector<string>b;

    string ss,s,d;

    ll n,m,i,j,k,l;

    ll t;

    cin>>t;

    getchar();

    while(t--)
    {
        getchar();

        getline(cin,s);

        getline(cin,ss);

        stringstream s1(s),s2(ss);


        while(s1 >> m)
        {
            a.push_back(m);
        }

        while(s2 >> d)
        {
            b.push_back(d);
        }

        for(i=0;i<a.size();i++)
        {
             x.push_back({a[i],b[i]});
        }

        sort(x.begin(),x.end());

        for(auto dd:x)
        {
            cout<<dd.second<<endl;
        }

        if(t) cout<<endl;

        x.clear();
        a.clear();
        b.clear();

    }
    return 0;
}
