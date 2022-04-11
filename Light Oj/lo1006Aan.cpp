#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,c,d,e,f;
    long long j,m[10000];
    int i,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>m[0]>>m[1]>>m[2]>>m[3]>>m[4]>>m[5]>>n;
        for(j=6;j<=n;j++)
        {
            m[j]=(m[j-1]+m[j-2]+m[j-3]+m[j-4]+m[j-5]+m[j-6])%10000007;
        }
        printf("Case %d: %lld\n",i,m[n]);
    }
    return 0;
}
