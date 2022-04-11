#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll f[266];
ll cc()
{
    for(ll i=0; i<26; i++)
    {
        if(f[i]) return i;
    }
    return 266;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a,b="";
    stack<char>x;
    multiset<char>y;

    ll n,m,i,j,k,l;


    cin>>a;

    for(i=0; i<a.size(); i++)
    {
        f[a[i]-'a']++;
    }

    for(i=0; i<a.size(); i++)
    {

        x.push(a[i]);

        f[a[i]-'a']--;

        while(x.empty()==false &&  x.top()-'a'<=cc())
        {
            b+=x.top();
            x.pop();
        }
    }

    while(x.empty()==false)
    {
        b+=x.top();
        x.pop();
    }

    cout<<b<<endl;

    return 0;
}
