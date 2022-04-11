#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fellow_junior

    test
    {
        ll a[10000],c[10000],d=0,e,f,i,j,k,l,n,m;
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<m; i++)
        {
            cin>>c[i];
        }
        sort(a,a+n);
        sort(c,c+m);
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i]==c[j])
                {
                    d=a[i];
                    break;
                }
            }
        }
        if(d==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl<<1<<" "<<d<<endl;
    }

    return 0;
}
