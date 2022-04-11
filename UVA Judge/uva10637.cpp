#include <bits/stdc++.h>
using namespace std;
#define ll int
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
vector<ll>x;
ll n,t;

bool valid(ll a)
{
    for(auto i: x)
    {
        if(__gcd(i,a)!=1)
        {
            return 0;
        }
    }
    return 1;
}

void backtrack(ll num,ll take,ll last)
{
    if(num==0)
    {
        if(take==t)
        {
            for(ll i=0; i<t; i++)
            {
                if(i==0) cout<<x[i];
                else cout<<" "<<x[i];
            }
            cout<<endl;
        }
        return;
    }

    if(take==t)
    {
        return;
    }

    for(ll i=last; i<=num; i++)
    {
        if(valid(i)==1)
        {
            x.push_back(i);
            backtrack(num-i,take+1,i);
            x.pop_back();
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
        cin>>n>>t;
        cout<<"Case "<<cs<<":"<<endl;
        backtrack(n,0,1);
    }


    return 0;
}
