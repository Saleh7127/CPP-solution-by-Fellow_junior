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
        ll a[10000],b,c,d,e,f,i,j,k,l;

        cin>>b;
        for(i=1; i<=b; i++)
        {
            cin>>a[i];
        }
        vector<ll>x;
        if(b%2==0)
        {
            for(i=1; i<=b/2; i++)
            {
                j=b-i+1;

                x.push_back(a[i]);
                x.push_back(a[j]);
            }
        }
        else
        {
            for(i=1; i<=b/2; i++)
            {
                j=b-i+1;

                x.push_back(a[i]);
                x.push_back(a[j]);
            }
            j=(b+1)/2;
            x.push_back(a[j]);
        }
        for(i=0; i<x.size(); i++)
        {
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
