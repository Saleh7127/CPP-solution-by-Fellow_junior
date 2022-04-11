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

        string a,b;

        ll n,m,i,j,k=0,l=0;
        cin>>n>>a>>b;

        ll o[n+2]={0}, z[n+2]={0};

        for(i=0; i<n; i++)
        {
            if(a[i]=='0') z[i]++;
            else o[i]++;
        }
        for(i=1; i<n; i++)
        {
            z[i]+=z[i-1];
            o[i]+=o[i-1];
        }
        for(i=n-1; i>=0; i--)
        {
            if(l%2==0)
            {
                if(a[i]!=b[i])
                {
                    if(z[i]==o[i])
                    {
                        l++;
                    }
                    else
                    {
                        k=1;
                        break;
                    }
                }
            }
            else
            {
                if(a[i]==b[i])
                {
                    if(z[i]==o[i]) l++;
                    else
                    {
                        k=1;
                        break;
                    }
                }
            }
        }
        if(k) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }


    return 0;
}
