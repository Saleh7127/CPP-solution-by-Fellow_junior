#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

bool hedaaa(ll a)
{
    if(a<=1) return 0;
    else if(a==2) return 1;
    else if(a%2==0) return 0;
    else
    {
        ll x=3;
        ll s=sqrt(a)+1;
        while(x<=s)
        {
            if(a%x==0)
            {
                return 0;
            }
            x+=2;
        }
        return 1;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        ll r,l;
        cin>>l>>r;
        for(ll i=l;i<=r;i++)
        {
            if(hedaaa(i))
            {
                cout<<i<<endl;
            }
        }
    }


    return 0;
}
