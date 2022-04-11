#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        ll n,m,j,k,l=0;

        string a;

        cin>>a;

        n=a.size();

        auto check = [&](ll x,ll y)
        {
            ll c=0;
            for(ll i=0; i<n; i++)
            {
                if(c%2==0 && (a[i]-'0')==x) c++;
                else if(c%2==1 && (a[i]-'0')==y) c++;
            }

            if(x==y) return c;
            else if(c%2==1) return c-1;
            else return c;
        };


        for(j=0; j<=9; j++)
        {
            for(k=0; k<=9; k++)
            {
                l=max(l,check(j,k));
            }
        }

        cout<<n-l<<endl;
    }

    return 0;
}
