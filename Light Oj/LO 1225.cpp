#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    string a,c;
    ll t,i,j,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        c=a;
        reverse(c.begin(),c.end());
        if(a==c) printf("Case %lld: Yes\n",i);
        else printf("Case %lld: No\n",i);
    }
    return 0;
}
