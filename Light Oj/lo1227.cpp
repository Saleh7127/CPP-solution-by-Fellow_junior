#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,t,b,c,d[1000],e,f,i,j,k,l,n,p,q;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        e=0;
        f=0;
        cin>>n>>p>>q;
        for(j=0;j<n;j++)
        {
            cin>>d[j];
        }
        for(j=0;j<n;j++)
        {
            f+=d[j];
            if(e<p && f<=q) e++;
        }
        printf("Case %d: %d\n",i,e);
    }
    return 0;
}
