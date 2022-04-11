#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a[1000]={0},i,j,c,d,e=0,f,n,k;
    cin>>n>>k;
    while(k--)
    {
        cin>>c;
        for(i=0;i<c;i++)
        {
            cin>>d;
            a[d]++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==0) e++;
    }
    printf("%lld\n",e);
    return 0;
}
