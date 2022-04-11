#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000000]={0};
int main()
{
    ll n,i,k;
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>k;
        a[k]++;
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==0)
        {
            printf("%lld\n",i);
            return 0;
        }
    }
    return 0;
}
