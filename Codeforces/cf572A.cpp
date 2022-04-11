#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b[100000],c,d,e,f,i,j,k,l;
    cin>>c>>d;
    cin>>e>>f;
    for(i=0;i<c;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<d;i++)
    {
        cin>>b[i];
    }
    if(a[e-1]<b[d-f])
    {
        cout<<"YES\n";
    }
    else cout<<"NO\n";

    return 0;
}
