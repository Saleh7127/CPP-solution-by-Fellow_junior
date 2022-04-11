
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a,c;
    ll i,j=0,k,l;
    cin>>a>>c;
    for(i=0;i<a.size();i++)
    {
        if(a[i]!=c[i])
        {
            j=1;
        }
    }
    if(j) printf("No\n");
    else printf("Yes\n");
    return 0;
}
