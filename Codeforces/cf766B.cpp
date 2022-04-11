#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a[100005],c,d,e,f,i,j=0,k,l;
    cin>>c;
    for(i=0; i<c; i++)
    {
        cin>>a[i];
    }
    sort(a,a+c);
    for(i=1; i<c-1; i++)
    {
        if(a[i-1]+a[i]>a[i+1])
            j=1;
    }
    if(j) printf("YES\n");
    else printf("NO\n");
    return 0;
}
