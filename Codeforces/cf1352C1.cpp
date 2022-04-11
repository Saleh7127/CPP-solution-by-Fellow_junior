#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 100000000000
void solution()
{
    ll n,k;
    cin>>n>>k;
    ll hi=inf,lo=1;
    ll mid,temp,ans;
    while(hi>=lo)
    {
        mid=(hi+lo)/2;
        temp=mid/n;
        temp=(mid-temp);
        if(temp>=k)
        {
            ans=mid;
            hi=mid-1;
        }
        else
        {
            lo=mid+1;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}

