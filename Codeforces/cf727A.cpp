#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a,c,d,e,i,j=0,k,l;
vector<ll>ans;

void xxx(ll x)
{

    if(x>c) return;
    if(x==c)
    {
        j=1;
        while(x>=a)
        {
            ans.push_back(x);
            if(x%2==0) x/=2;
            else x=(x-1)/10;
        }
        return;
    }
    xxx(x*2);
    xxx((x*10)+1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>a>>c;

    xxx(a);

    if(j)
    {
        cout<<"YES"<<endl;
        cout<<ans.size()<<endl;
        for(i=ans.size()-1; i>=0; i--)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}
