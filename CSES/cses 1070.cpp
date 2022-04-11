#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,i;
    cin>>a;
    if(a==1) printf("1\n");
    else if(a==3 || a==2) printf("NO SOLUTION\n");
    else
    {
        for(i=2;i<=a;i+=2)
        {
            printf("%lld ",i);
        }
        for(i=1;i<=a;i+=2)
        {
            if(i==a || i==a-1) printf("%lld\n",i);
            else printf("%lld ",i);
        }
    }
    return 0;
}
