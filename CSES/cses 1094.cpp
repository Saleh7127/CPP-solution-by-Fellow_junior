#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a[200005],n,i,j,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            c+=(a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }
    cout<<c<<endl;
    return 0;
}
