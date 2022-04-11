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
        ll n,m,i,j,k,l,d,e=0,ans=-1;
        cin>>n;

        m=n;
        n+=2;

        ll a[n+5];
        ll b[n+5];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
            e+=a[i];
        }

        sort(a,a+n);

        l=a[n-1];
        d=e-l;

        for(i=0; i<n-1; i++)
        {
            if(d-a[i]==l)
            {
                ans=a[i];
                break;
            }
        }

        if(ans!=-1)
        {
            k=j=0;
            for(i=0; i<n; i++)
            {
                if(j&&k) break;
                if((b[i]==l && j==0))
                {
                    b[i]=-1;
                    j=1;
                }
                if(b[i]==ans && k==0) k=1,b[i]=-1;
            }
        }
        else
        {
            l=a[n-2];
            d=e-l;
            ans=-1;
            for(i=0; i<n; i++)
            {
                if(i==n-2) continue;

                if(d-a[i]==l)
                {
                    ans=a[i];
                    break;
                }
            }
            if(ans!=-1)
            {
                k=j=0;
                for(i=0; i<n; i++)
                {
                    if(j&&k) break;
                    if((b[i]==l && j==0))
                    {
                        b[i]=-1;
                        j=1;
                    }
                    if(b[i]==ans && k==0) k=1,b[i]=-1;
                }
            }
        }



        if(ans==-1) cout<<-1<<endl;
        else
        {
            for(i=0;i<n;i++)
            {
                if(b[i]==-1) continue;
                else cout<<b[i]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}

