#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test

    {

        ll n,m=-1e9,i,j,k,l=-1e9,a,b;
        string c;

        cin>>n>>a>>b>>c;

        if(b>=0)
        {
            l=(a+b)*n;
        }
        else
        {
            j=k=0ll;

            for(i=0; i<n; i++)
            {
                if(i==0)
                {
                    if(c[0]=='1') j++;
                    else k++;
                }
                else
                {
                    if(c[i]=='1' && c[i-1]=='0') j++;
                    else if(c[i]=='0' && c[i-1]=='1') k++;
                }
            }

            j++,k++;

            m=a*n+b*min(j,k);
        }
        cout<<max(m,l)<<endl;

    }

    return 0;
}
