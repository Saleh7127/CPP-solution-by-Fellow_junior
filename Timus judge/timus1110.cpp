#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<ll>a;
    a.clear();
    ll n,m,y,i,j,k,l;
    cin>>n>>m>>y;
    for(i=0; i<m; i++)
    {
        int ans=i;
        for(k=1;k<n;k++)
        {
            ans*=i;
            ans%=m;
        }
        if(ans==y)
        {
            a.push_back(i);
        }
    }
    if(a.size()==0) printf("-1\n");
    else
    {
        for(j=0; j<a.size(); j++)
        {
           if(j!=a.size()-1) printf("%lld ",a[j]);
           else printf("%lld\n",a[j]);
        }
    }
    return 0;
}
