#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a;
    cin>>a;
    printf("%lld",a);
    while(1)
    {
        if(a==1) {break; }
        else if(a%2)
        {
            a=a*3 +1;
            printf("% lld",a);
        }
        else
        {
            a=a/2;
            printf("% lld",a);
        }
    }
    cout<<endl;
    return 0;
}
