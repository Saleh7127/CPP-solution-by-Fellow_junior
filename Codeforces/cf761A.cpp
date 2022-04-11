#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,c,d,e,f;
    cin>>a>>c;
    if(a==0 && c==0) printf("NO\n");
    else if(abs(a-c)<=1) printf("YES\n");
    else printf("NO\n");
    return 0;
}
