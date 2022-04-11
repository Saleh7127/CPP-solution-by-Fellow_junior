#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {

        ll n,m,i,j,k,l,sa,sb,lo,hi,mid,ans;

        cin>>n;

        vector<ll>a(n+4),b(n+4);

        for(i=0; i<n; i++) cin>>a[i];

        for(i=0; i<n; i++) cin>>b[i];

        lo=-1,hi=3*n;

        while(hi-lo>1)
        {
            mid=(lo+hi)/2;

            vector<ll>x,y;
            x=a,y=b;


            for(i=0; i<mid; i++) x.push_back(100);
            for(i=0; i<mid; i++) y.push_back(0);

            sort(x.begin(),x.end(),greater<ll>());
            sort(y.begin(),y.end(),greater<ll>());

            sa=0,sb=0;
            k=(n+mid)-(n+mid)/4;

            for(i=0; i<k; i++)
            {
                sa+=x[i];
                sb+=y[i];
            }

            if(sa>=sb)
            {
                hi=mid;
                ans=hi;
            }
            else lo=mid;
        }


        cout<<ans<<endl;

    }

    return 0;
}

