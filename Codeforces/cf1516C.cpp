#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll x[105][200005];
ll a[200];

ll sol(ll ind,ll s)
{
    if(s==0) return 1;

    if(ind<0 || s<=0) return 0;

    if(x[ind][s]!=-1) return x[ind][s];

    return x[ind][s]=sol(ind-1,s-a[ind]) || sol(ind-1,s);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,i,j,k,l=0;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        l+=a[i];
    }
    if(l%2==1)
    {
        cout<<0<<endl;
        return 0;
    }

    memset(x,-1,sizeof x);

    l/=2;
    if(sol(n-1,l)==0)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        while(true)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]%2)
                {
                    cout<<1<<endl<<i+1<<endl;
                    return 0;
                }
                else
                {
                    a[i]/=2;
                }
            }
        }

    }

    return 0;
}
