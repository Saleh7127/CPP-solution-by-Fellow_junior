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

        ll n,k,i,j,l,m=0;
        string a;

        cin>>n>>k>>a;
        l=2*k+1;
        if(n<l)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(k==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(i=0; i<k; i++)
        {

            if(a[i]!=a[n-i-1])
            {
                m=1;
                break;
            }

        }
        if(m) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }


    return 0;
}
