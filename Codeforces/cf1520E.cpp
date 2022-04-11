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

        ll n,m,i,j,k,l,ans=0,b=0,c;

        cin>>n;

        string a;

        cin>>a;

        vector<ll>x;

        for(i=0; i<n; i++)
        {
            if(a[i]=='*')
            {
                x.push_back(i+1);
            }
        }

        l=x.size();

        k=l/2;

        for(i=k+1; i<l; i++)
        {
            ans+=abs(x[i-1]-x[i])-1+b;
            b+=abs(x[i-1]-x[i])-1;
        }

        b=0;

        for(i=k-1; i>=0; i--)
        {
            ans+=((x[i+1]-x[i])-1+b);
            b+=(x[i+1]-x[i])-1;
        }


        if(l==0) cout<<l<<endl;
        else cout<<ans<<endl;
    }

    return 0;
}

