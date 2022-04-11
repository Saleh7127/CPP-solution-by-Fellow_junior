#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll f[10001000];

ll factor(ll n)
{
    ll c=0;
    while(n%2==0)
    {
        c++;
        n/=2;
    }
    for(ll i=3; i<=sqrt(n); i+=2)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                c++;
                n/=i;
            }
        }
    }
    if(n>1) c++;

    return c;
}

void precal()
{
    f[0]=1;
    f[1]=1;
    f[2]=1;
    f[3]=2;
    for(ll i=4; i<=2703670; i++)
    {
        f[i]=f[i-1]+factor(i);
    }
}

ll searchh(ll x)
{
    ll lo=0,hi=2703670,mid,ans=-1;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(f[mid]<=x)
        {
            lo=mid+1;
            ans=lo;
        }
        else hi=mid-1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    precal();

    ll n;

    test
    {

        cin>>n;

        cout<<searchh(n)<<endl;

    }


    return 0;
}
