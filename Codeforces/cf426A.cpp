#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c,d=0,e,f,i,j,k,l;
    cin>>b>>c;
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    sort(a,a+b);
    for(i=0;i<b-1;i++)
    {
        d+=a[i];
    }
    if(d<=c) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
