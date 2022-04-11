#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll a[52][52],x[5000],y[5000],e[52][52];
int main()
{
    fellow_junior
    ll r,c,i,j,k,l,f=0,d;
    cin>>r>>c;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(a[i][j] && a[i+1][j] && a[i][j+1] && a[i+1][j+1])
            {
                f++;
                x[f]=i;
                y[f]=j;
                e[i][j]=e[i+1][j]=e[i][j+1]=e[i+1][j+1]=1;
            }
        }
    }
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(a[i][j]!=e[i][j])
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<f<<endl;
    for(i=1; i<=f; i++)
    {
        cout<<x[i]<<" "<<y[i]<<endl;
    }

    return 0;
}
