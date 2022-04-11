#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,a,c,d,e,f,i,j,k,l;
    scanf("%lld",&t);
    while(t--)
    {
        c=0;
        d=0;
        scanf("%lld",&a);
        for(i=1;i<=a;i++)
        {
            if(i<a/2 || i==a)
            {
                c+=pow(2,i);
            }
            else
            {
                d+=pow(2,i);
            }
        }
        printf("%lld\n",abs(c-d));
    }
    return 0;
}
