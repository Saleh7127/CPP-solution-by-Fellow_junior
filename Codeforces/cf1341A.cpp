#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,n,b,c,d,e,f,i,j,k,l,m,o,p;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>n>>a>>b>>c>>d;
        l=n*(a-b);
        m=n*(a+b);
        o=c-d;
        p=c+d;
        if(l>p || m<o) f=1;
        if(!f)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

