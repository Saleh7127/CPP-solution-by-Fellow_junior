#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,a,s=0;
    scanf("%lld",&a);
    if(a%2==0)
    {
        s=a/2;
    }
     else if(a%2!=0)
    {
        s=((a+1)/2)*(-1);
    }
    printf("%lld\n",s);

    return 0;
}

