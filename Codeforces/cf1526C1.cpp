#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k=0,l;

    priority_queue<ll,vector<ll>,greater<ll>>a;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>m;
        k+=m;
        a.push(m);
        if(k<0)
        {
            k-=a.top();
            a.pop();
        }
    }

    ///cout<<a.top()<<endl;
    cout<<a.size()<<endl;

    return 0;
}
