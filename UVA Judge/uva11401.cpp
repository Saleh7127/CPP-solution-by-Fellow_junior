#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll tri[1000005],cur[1000005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll i,j,k,l,a,c,d=0;

    ///tri[3]=cur[3]=0;
    for(i=4; i<=1000003; i++)
    {
        if(i%2==0)
        {
            d++;
            cur[i]=cur[i-1]+d;
            tri[i]=tri[i-1]+cur[i];
        }
        else
        {
            cur[i]=cur[i-1]+d;
            tri[i]=tri[i-1]+cur[i];
        }
    }

    while(cin>>a && a>=3)
    {
        cout<<tri[a]<<endl;
    }

    return 0;
}
