#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int n,m,p,x[100002]= {0},ac=0,wa[100002]= {0},i,j,k,l;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s[100002];

    cin>>n>>m;

    for(i=0; i<m; i++)
    {
        cin>>p>>s[i];
        if(x[p]==0 && s[i]=="WA")
        {
            wa[p]++;
        }
        if(x[p]==0 && s[i]=="AC")
        {
            x[p]=1;
            ac++;
        }
    }

    for(i=1; i<=n; i++)
    {
        if(x[i]==1)
        {
            wa[0]+=wa[i];
        }
    }
    cout<<ac<<" "<<wa[0]<<endl;
    return 0;
}
