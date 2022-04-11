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
        ll n,m,i,j,k,l;

        string a;

        cin>>n>>a;
        l=n;
        for(i=0;i<n;i++)
        {
             if(a[i]=='1')
             {
                  j=(i+1)*2;
                  k=(n-i)*2;
                  l=max({l,j,k});
             }
        }
        cout<<l<<endl;
    }


    return 0;
}

