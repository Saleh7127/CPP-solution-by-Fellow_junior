#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll f[1000005];
ll mod(ll a,ll c,ll d)
{
    if(c==0) return 1;
    ll x=mod(a,c/2,d);
    x=x*x%d;
    if(c%2==1)
    {
        x=(x*a)%d;
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,a,b,c=1,i,j,k,l;



        cin>>a>>b>>n;

        f[0]=0;
        f[1]=1%n;

        for(i=2; ; i++)
        {
            f[i]=(f[i-2]+f[i-1])%n;

            if(f[i]==f[1] && f[i-1]==f[0])
            {
                c=i-1;
                break;
            }
        }

        k=mod(a%c,b,c);

        cout<<f[k]<<endl;


    }

    return 0;
}
