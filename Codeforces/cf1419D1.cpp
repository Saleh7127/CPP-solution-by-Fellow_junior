#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a[200005],c,d,e,f,i,j,k,l;
    cin>>c;

    for(i=0; i<c; i++)
    {
        cin>>a[i];
    }

    sort(a,a+c,greater<int>());
    cout<<(c-1)/2<<endl;
    if(c%2==0)
    {
        for(i=0; i<(c/2); i++)
        {
            cout<<a[i]<<" "<<a[c-i-1]<<" ";
        }
        cout<<endl;
    }

    else
    {
        for(i=0; i<(c/2); i++)
        {
            cout<<a[i]<<" "<<a[c-i-1]<<" ";
        }
        cout<<a[c/2]<<endl;
    }
    return 0;
}
