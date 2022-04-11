#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,d=0,e,f,i,j,k,l;
    cin>>t;
    int a[t],b[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
        d+=a[i];
        b[i]=d;
    }
    cin>>e;
    int c[e];
    for(j=0;j<e;j++)
    {
        cin>>c[j];
    }
    for(j=0;j<e;j++)
    {
        f=lower_bound(b,b+t,c[j])-b+1;
        cout<<f<<endl;
    }
    return 0;
}
