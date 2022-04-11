#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maX 20000002
ll ans[maX],di[maX];
int main()
{


    ll i,j,k,l;

    for(i=1; i<=maX; i++)
    {
        for(j=i; j<=maX; j+=i)
        {
            di[j]+=i;
        }
    }

    for(i=2; i<=maX; i++)
    {
        ans[i]=di[i]+ans[i-1];
    }

    while(cin>>k && k)
    {
        cout<<ans[k]<<endl;
    }

    return 0;
}
