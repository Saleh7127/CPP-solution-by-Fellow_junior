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

        ll n,m,i,j,k,l,d;
        string a;

        cin>>n>>k;

        cin>>a;

        vector<ll>x;

        for(i=0; i<n; i++)
        {
            if(a[i]=='*')
            {
                x.push_back(i+1);
            }
        }
        if(x.size()<=1) m=x.size();
        else
        {
            m=2;
            l=d=x[0];
            for(i=0; i<x.size(); i++)
            {
                if(k<x[i]-l)
                {
                    m++;
                    l=d;
                }
                d=x[i];
            }
        }

        cout<<m<<endl;
    }

    return 0;
}
