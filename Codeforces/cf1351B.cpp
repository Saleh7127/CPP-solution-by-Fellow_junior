#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,c,t,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>a>>c;
        cin>>d>>e;
        if(a>c) swap(a,c);
        if(d>e) swap(d,e);
        if(a+d==c && a+d==e) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
