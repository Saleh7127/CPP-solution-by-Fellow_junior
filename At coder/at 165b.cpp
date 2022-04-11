#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,c,d=0,e,f,i,j,k,l;
    scanf("%lld",&a);
    c=100;
    while(c<a)
    {
        c+=c/100;
        d++;
    }
    printf("%lld\n",d);
    return 0;
}
