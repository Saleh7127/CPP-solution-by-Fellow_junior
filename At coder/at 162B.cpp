#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b=0,c,d,e,f,i,j=0,k,l;
    scanf("%lld",&a);
    c=(a*(a+1))/2;
    for(i=1; i<=a; i++)
    {
        if(i%3==0 || i%5==0)
        {
            b+=i;
        }
    }
    printf("%lld\n",abs(b-c));
    return 0;
}
