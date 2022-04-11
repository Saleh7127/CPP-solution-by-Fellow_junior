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
        ll n,m,i,j,k,l=0;

        cin>>n>>m;
        char a[n+2][m+2];

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i][j]=='W' && (i+j)%2==0) l=1;
                if(a[i][j]=='R' && (i+j)%2==1) l=1;
            }
        }

        if(!l)
        {
            cout<<"YES"<<endl;
            for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)
                {
                    if((i+j)%2==0) cout<<"R";
                    if((i+j)%2==1) cout<<"W";
                }
                cout<<endl;
            }
            continue;
        }
        l=0;

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i][j]=='W' && (i+j)%2==1) l=1;
                if(a[i][j]=='R' && (i+j)%2==0) l=1;
            }
        }

        if(!l)
        {
            cout<<"YES"<<endl;
            for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)
                {
                    if((i+j)%2==1) cout<<"R";
                    if((i+j)%2==0) cout<<"W";
                }
                cout<<endl;
            }
            continue;
        }
        cout<<"NO"<<endl;
    }

    return 0;
}
