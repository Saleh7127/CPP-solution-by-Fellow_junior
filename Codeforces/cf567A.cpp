#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e,f,g,h;
    cin>>b;
    int a[300000];
    for(int i=1; i<=b; ++i)
    {
        cin>>a[i];
    }
    c=(a[2]-a[1]);
    d=(a[b]-a[1]);
    cout<<c<<' '<<d<<endl;
    for(int i=2; i<=b-1; ++i)
    {
        e=min(a[i]-a[i-1],a[i+1]-a[i]);
        f=max(a[b]-a[i],a[i]-a[1]);
        cout<<e<<' '<<f<<endl;
    }
    g=(a[b]-a[b-1]);
    h=(a[b]-a[1]);
    cout<<g<<' '<<h<<endl;
    return 0;
}
