#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c=0,d,i,j,k,l;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<b;i++)
    {
        if(abs(a[i]-a[i-1])>1)
        {
            c=1;
        }
    }
    if(c==0) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

