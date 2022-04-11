#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll lcmm(ll a,ll b)
{
    ll ans;

    ans=(a*b)/__gcd(a,b);

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a[1000],b,c,d,e,f,mx,mn,i,j,k,l;
    while(cin>>b>>c && b && c)
    {
        for(i=0; i<b; i++)
        {
            cin>>a[i];
        }
        while(c--)
        {
            cin>>d;
            mx=10000000000;
            mn=10000000000;
            for(i=0; i<b; i++)
            {
                for(j=i+1; j<b; j++)
                {
                    for(k=j+1; k<b; k++)
                    {
                        for(l=k+1; l<b; l++)
                        {
                            e=lcmm(a[i],lcmm(a[j],lcmm(a[k],a[l])));

                            ll rem=d%e;
                            ll val=e-rem;

                            if(rem==0)
                            {
                                i=j=k=l=b;
                                mx=0;
                                mn=0;
                            }
                            else
                            {
                                mn=min(rem,mn);
                                mx=min(val,mx);
                            }
                        }
                    }
                }
            }
            cout<<d-mn<<" "<<d+mx<<endl;
        }
    }

    return 0;
}
