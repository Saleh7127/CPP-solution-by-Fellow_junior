#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a;

    ll n,b,c,i,j,k,l=0;

    cin>>n>>a;
    ll m[100000]= {0};
    for(i=0; i<n; i++)
    {
        if(a[i]=='1') m[0]++;
        cin>>b>>c;
        for(j=c; j<1000; j+=b)
        {
            if(a[i]=='0')
            {
                a[i]='1';
                m[j]++;
            }
            else
            {
                a[i]='0';
                m[j]--;
            }
        }
    }
    l=m[0];
    for(i=1; i<1000; i++)
    {
        m[i]+=m[i-1];
        l=max(l,m[i]);
    }

    cout<<l<<endl;

    return 0;
}
