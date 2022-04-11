#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll b,c=0,d=0,e=0,i,j,k;
    scanf("%lld",&b);
    for(i=1; i<=b; i++)
    {
        for(j=1; j<=b; j++)
        {
            for(k=1; k<=b; k++)
            {
                c+=__gcd(i,__gcd(j,k));
            }
        }
    }
    printf("%lld\n",c);
    return 0;
}
