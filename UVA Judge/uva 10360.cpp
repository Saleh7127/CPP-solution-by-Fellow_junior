#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[2200][2200];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,i,j,k,l,c,b,d,z,y,x;
        cin>>d;
        cin>>n;
        while(n--)
        {
            cin>>x>>y>>z;
            for(i=x-d; i<=(x+d); i++)
            {
                for(j=y-d; j<=(y+d); j++)
                {
                    if(i>=0 && i<=1025 && j>=0 && j<=1025)
                    {
                        a[i][j]+=z;
                    }
                }
            }
        }
        l=0;
        c=b=0;
        for(i=0; i<=1025; i++)
        {
            for(j=0; j<=1025; j++)
            {
                if(a[i][j]>l)
                {
                    l=a[i][j];
                    c=i;
                    b=j;
                }
            }
        }
        cout<<c<<" "<<b<<" "<<l<<endl;
        for(i=0;i<=1025;i++)
        {
            for(j=0;j<=1025;j++)
            {
                a[i][j]=0;
            }
        }
    }


    return 0;
}
