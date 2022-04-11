#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,c,d,e,f=0,i,j,k;
    cin>>s>>n;
    pair<int,int> a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i].first;
        cin>>a[i].second;
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(s>a[i].first)
        {
            s+=a[i].second;
        }
        else
        {
            f=1;
            break;
        }
    }
    if(f==0) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
