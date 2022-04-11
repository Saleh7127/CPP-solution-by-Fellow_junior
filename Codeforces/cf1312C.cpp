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

        ll n,m,i,j,k,l,g,h=0;

        cin>>n>>k;

        ll a[n+5];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        map<ll,ll>x;

        sort(a,a+n);

        for(i=0; i<n; i++)
        {

            l=a[i];

            g=0;

            while(1)
            {
                if(l<=0) break;

                g=0;

                while(1)
                {
                    j=pow(k,g);
                    if(j>=l)
                    {
                        if(j==l)
                        {
                            l=0;
                            x[g]++;
                        }
                        else if(j>l)
                        {
                            g--;
                            x[g]++;
                            l-=pow(k,g);
                        }
                        break;
                    }
                    g++;
                }
            }

        }

        h=0;
        for(i=0; i<=60; i++)
        {
            if(x[i]>1)
            {
                h=1;
                break;
            }
        }
        if(h) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }


    return 0;
}
