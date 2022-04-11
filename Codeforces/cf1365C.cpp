#include <bits/stdc++.h>
using namespace std;
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int x,n,a[200005],c[200005],d[200005],e,f=0,i,j,k,l;
int main ()
{
    Faster
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        a[x]=i;
    }
    for(i=1;i<=n;i++)
    {
        cin>>x;
        c[x]=i;
    }
    for(j=1;j<=n;j++)
    {
        e=c[j]-a[j];
        if(e<0) e+=n;
        d[e]++;
    }
    for(j=0;j<=n;j++)
    {
        f=max(f,d[j]);
    }
    cout<<f<<endl;
    return 0;
}
