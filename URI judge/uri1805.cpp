#include<bits/stdc++.h>
using namespace std;
int main()

{
    long long int a,b,c=0,i;
    scanf("%lld %lld",&a,&b);
    for(i=a;i<=b;i++)
    {
        c+=i;
    }
    printf("%lld\n",c);

    return 0;
}
