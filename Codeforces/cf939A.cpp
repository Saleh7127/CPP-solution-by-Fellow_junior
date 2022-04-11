#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c,d,e,f,i,j,k,l;
    cin>>b;
    for(i=1; i<=b; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=b; i++)
    {
        if(a[a[a[i]]]==i)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    if(i>b) cout<<"NO\n";
    return 0;
}
