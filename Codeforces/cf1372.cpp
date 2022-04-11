#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll a[200005],c,d,e,f,i,j=0,k,l=0;
        cin>>c;
        for(i=1; i<=c; i++)
        {
            cin>>a[i];
            if(a[i]==i)
            {
                j++;
            }
        }
        if(j==c)
        {
            cout<<0<<endl;
            continue;
        }

        for(i=1; i<=c; i++)
        {
            if(a[i]!=i)
            {
                j=i;
                break;
            }
        }
        for(i=c; i>=1; i--)
        {
            if(a[i]!=i)
            {
                k=i;
                break;
            }
        }
        for(i=j; i<=k; i++)
        {
            if(a[i]==i)
            {
                l=1;
            }
        }
        if(l) cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
