#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll x[200000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll a[200000],c,d,e,f,i,j,k,l=1,n,t;
        cin>>n>>d;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(d%2==0)
        {
            e=d/2;
            for(i=0; i<n; i++)
            {
                if(a[i]<e)
                {
                    a[i]=1;
                }
                else if(e==a[i])
                {
                    if(l==1)
                    {
                        a[i]=1;
                        l=0;
                    }
                    else
                    {
                        a[i]=0;
                        l=1;
                    }
                }
                else
                {
                    a[i]=0;
                }
            }
        }
        else
        {
            e=d/2+1;
            for(i=0; i<n; i++)
            {
                if(a[i]<e) a[i]=1;
                else a[i]=0;
            }
        }
        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
