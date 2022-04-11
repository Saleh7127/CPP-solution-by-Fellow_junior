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

        ll n,c,d=0,e=0,f,i,j,k,l;
        cin>>n;
        ll a[n+5];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<n; i++)
        {
            if(a[i-1]>a[i])
            {
                for(j=i; j<n; j++)
                {
                    if(a[j]>a[i-1]) break;

                    c=a[i-1]-a[j];

                    if(c==0) continue;
                    else
                    {
                        d=0;
                        while(c>0)
                        {
                            d++;
                            c/=2;
                        }
                        e=max(e,d);
                    }
                }
                i=j;
            }
        }
        cout<<e<<endl;

    }
    return 0;
}
