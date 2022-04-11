#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll a[1005][1005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,i,j,k,l;

    cin>>n>>m>>l;


    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }
    }


    while(l--)
    {
        cin>>k;
        i=1;
        j=k;
        while(i<=n)
        {
            if(a[i][k]==1)
            {
                a[i][k]=2;
                k++;
            }

            else if(a[i][k]==2)
            {
                i++;
            }

            else if(a[i][k]==3)
            {
                a[i][k]=2;
                k--;
            }
        }
        cout<<k<<" ";
    }
    cout<<"\n";

    return 0;
}

