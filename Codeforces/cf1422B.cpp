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
        ll a[105][105],c,d,e,f,r,i,j,k,l,m,n;
        cin>>r>>c;

        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                cin>>a[i][j];
            }
        }
        l=0;

        for(i=1; i<=(r+1)/2; i++)
        {
            for(j=1; j<=(c+1)/2; j++)
            {
                vector<ll>x;

                m=r+1-i;
                n=c+1-j;

                x.push_back(a[i][j]);

                if(m!=i) x.push_back(a[m][j]);
                if(n!=j) x.push_back(a[i][n]);
                if(m!=i && n!=j) x.push_back(a[m][n]);

                sort(x.begin(),x.end());

                if(x.size()==2) l+=x[1]-x[0];
                else if(x.size()==4) l+=x[3]+x[2]-x[1]-x[0];
            }
        }
        cout<<l<<endl;
    }
    return 0;
}
