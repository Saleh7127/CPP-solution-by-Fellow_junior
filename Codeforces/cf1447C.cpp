#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll x[200005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,w,a[200005],b,c,d,e,f,i,j=0,k,l;

    test
    {
        cin>>n>>w;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            x[i]=a[i];
            if(a[i]<=w) j=1;
        }

        sort(x+1,x+n+1);
        c=0;
        j=0;
        k=0;
        for(i=1; i<=n; i++)
        {
            c+=x[i];
            if(c>=((w+1)/2) && c<=w)
            {
                j=1;
                break;
            }
            else if(x[i]>=((w+1)/2) && x[i]<=w)
            {
                j=1;
                k=1;
                l=x[i];
                break;
            }
        }
        if(j==0) cout<<-1<<endl;
        else if(k)
        {
            cout<<1<<endl;
            for(i=1; i<=n; i++)
            {
                if(a[i]==l)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
        else
        {
            vector<ll>ans;
            j=0;
            c=0;
            for(i=1; i<=n; i++)
            {
                if(c+a[i]<=w)
                {
                    c+=a[i];
                    ans.push_back(i);
                }
                if(c>=((w+1)/2) && c<=w)
                {
                    break;
                }
            }
            cout<<ans.size()<<endl;
            for(i=0; i<ans.size(); i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
