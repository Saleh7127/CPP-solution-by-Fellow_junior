#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,a,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>a>>c;
        if(a==1 or c==1) printf("YES\n");
        else if(a==2 && c==2) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
