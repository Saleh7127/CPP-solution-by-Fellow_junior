#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
string a[100005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,l=1000000000000;
        cin>>n>>m;
        ll r[n+5]={0},c[m+5]={0};
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i][j]=='.')
                {
                    r[i]++;
                    c[j]++;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                k=r[i]+c[j];
                if(a[i][j]=='.') k--;
                l=min(l,k);
            }
        }
        cout<<l<<endl;
    }


    return 0;
}
