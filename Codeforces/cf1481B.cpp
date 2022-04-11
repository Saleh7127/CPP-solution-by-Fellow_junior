#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll x[100000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll a,b,c,i,j=0,k,ans=-1;

        cin>>a>>b;

        for(i=0; i<a; i++)
        {
            cin>>x[i];

        }

        while(j<=b)
        {

            for(i=0; i<a-1; i++)
            {
                if(x[i]<x[i+1])
                {
                    j++;
                    ans=i+1;
                    if(j==b)
                    {
                        break;
                    }
                    x[i]=x[i]+1;
                    break;
                }
            }

            if(i==a-1)
            {
                ans=-1;
                break;
            }

        }

        cout<<ans<<endl;
    }


    return 0;
}
