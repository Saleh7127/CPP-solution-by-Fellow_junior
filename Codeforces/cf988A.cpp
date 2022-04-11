#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000]={0},b,c,d,e[1000],i,j=0,k,l;
    cin>>b>>c;
    for(i=1;i<=b;i++)
    {
        cin>>d;
        a[d]++;
        if(a[d]==1) e[j++]=i;
    }
    if(j<c) cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(i=0;i<c;i++)
        {
            cout<<e[i]<<" ";
        }
    }
    return 0;
}
