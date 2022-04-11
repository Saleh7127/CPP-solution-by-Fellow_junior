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

        ll n,m,a[50][50]={0},b,c=0,d=0,e=100000,f,i,j,k,l;
        cin>>n>>m;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                cin>>a[i][j];
                if(a[i][j]<0) c++;
                d+=abs(a[i][j]);
                e=min(e,abs(a[i][j]));
            }
        }
        if(!c%2) cout<<d<<endl;
        else cout<<d-(2*e)<<endl;
    }

    return 0;
}
