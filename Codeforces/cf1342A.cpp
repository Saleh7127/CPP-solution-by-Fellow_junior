#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,x,y,c,d,e,f,i,j;
    cin>>t;
    while(t--)
    {
        e=0;
        cin>>x>>y;
        cin>>a>>b;
        d=min(x,y);
        if(x==y)
        {
            e=(x+y)*a;
            f=x*b;
            printf("%lld\n",min(e,f));
        }
        else
        {
            e=(x+y)*a;
            f=abs(x-y)*a +d*b;
            printf("%lld\n",min(e,f));
        }
    }
    return 0;
}
